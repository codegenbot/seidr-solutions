#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> get_odd_collatz(int n) {
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
    vector<int> odd_result;
    for(int num : result){
        if(num % 2 == 1){
            odd_result.push_back(num);
        }
    }
    sort(odd_result.begin(), odd_result.end());
    return odd_result;
}

int main() {
    // Test the get_odd_collatz function
    vector<int> test_input = {6, 8, 10, 12};
    vector<vector<int>> expected_output = {{3, 5}, {3, 5}, {5}, {5}};
    
    for(int i = 0; i < test_input.size(); i++){
        vector<int> output = get_odd_collatz(test_input[i]);
        assert(issame(output, expected_output[i]));
    }

    return 0;
}