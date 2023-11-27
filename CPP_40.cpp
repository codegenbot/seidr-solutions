#include <iostream>
#include <vector>

using namespace std;

bool triples_sum_to_zero(vector<int> l){
    int n = l.size();
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(l[i] + l[j] + l[k] == 0){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    // Test cases
    bool result1 = triples_sum_to_zero({100, 3, 5, -100});
    bool result2 = triples_sum_to_zero({1, 2, 3});
    bool result3 = triples_sum_to_zero({0, 0, 0, 0});
    
    // Print results
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;

    return 0;
}