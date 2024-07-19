#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> get_odd_collatz(int n){
    std::vector<int> result;
    while(n != 1){
        result.push_back(n);
        if(n % 2 == 0){
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    
    std::vector<int> odd_numbers;
    for(int num : result){
        if(num % 2 != 0){
            odd_numbers.push_back(num);
        }
    }
    
    std::sort(odd_numbers.begin(), odd_numbers.end());
    
    return odd_numbers;
}

int main() {
    // Test your implementation
    std::vector<int> test_result = get_odd_collatz(10); // Example test using number 10
    assert(issame(test_result, {1, 3, 5, 9}));
    
    return 0;
}