#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> get_odd_collatz(int n){
    vector<int> result;
    while(n != 1){
        result.push_back(n);
        if(n % 2 == 0){
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    
    vector<int> odd_numbers;
    for(int num : result){
        if(num % 2 != 0){
            odd_numbers.push_back(num);
        }
    }
    
    sort(odd_numbers.begin(), odd_numbers.end());
    
    return odd_numbers;
}

int main() {
    // Test the function
    vector<int> test_input = {7, 10, 15};
    vector<vector<int>> expected_output = {{7, 5, 3, 1}, {5, 3, 1}, {15, 5, 3, 1}};
    
    for(int i = 0; i < test_input.size(); ++i){
        vector<int> result = get_odd_collatz(test_input[i]);
        assert(issame(result, expected_output[i]));
    }
    
    return 0;
}