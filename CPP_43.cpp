#include <vector>

using namespace std;

bool pairs_sum_to_zero(vector<int> l){
    for(int i = 0; i < l.size(); i++){
        for(int j = i+1; j < l.size(); j++){
            if(l[i] + l[j] == 0){
                return true;
            }
        }
    }
    return false;
}

int main() {
    // Test cases
    vector<int> test1 = {1, 2, -3, 4, -1};
    vector<int> test2 = {1, 2, 3, 4, 5};
    
    if(pairs_sum_to_zero(test1)){
        cout << "There are pairs that sum to zero in test1" << endl;
    } else {
        cout << "There are no pairs that sum to zero in test1" << endl;
    }
    
    if(pairs_sum_to_zero(test2)){
        cout << "There are pairs that sum to zero in test2" << endl;
    } else {
        cout << "There are no pairs that sum to zero in test2" << endl;
    }
    
    return 0;
}