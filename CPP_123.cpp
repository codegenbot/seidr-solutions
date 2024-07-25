#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    // Test the function get_odd_collatz
    std::vector<int> test_result = get_odd_collatz(10);
    std::vector<int> expected_result = {1, 5, 7, 9, 10};
    assert(issame(test_result, expected_result));
    
    return 0;
}