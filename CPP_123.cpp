#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
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
    vector<int> test_input = {7, 16, 5, 8, 2, 1};
    vector<int> expected_output = {1, 5, 7};
    vector<int> result = get_odd_collatz(7);
    
    assert(issame(result, expected_output));
    
    return 0;
}