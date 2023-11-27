#include <vector>

bool pairs_sum_to_zero(vector<int> l){
    for(int i=0; i<l.size(); i++){
        for(int j=i+1; j<l.size(); j++){
            if(l[i] + l[j] == 0){
                return true;
            }
        }
    }
    return false;
}

int main() {
    // Test cases
    vector<int> test1 = {1, 2, 3, -1, -2, -3};
    vector<int> test2 = {1, 2, 3, 4, 5};
    
    // Test the pairs_sum_to_zero function
    if (pairs_sum_to_zero(test1)) {
        cout << "Test 1: Pairs sum to zero" << endl;
    } else {
        cout << "Test 1: Pairs do not sum to zero" << endl;
    }
    
    if (pairs_sum_to_zero(test2)) {
        cout << "Test 2: Pairs sum to zero" << endl;
    } else {
        cout << "Test 2: Pairs do not sum to zero" << endl;
    }
    
    return 0;
}