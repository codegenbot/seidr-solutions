#include <vector>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> f(int n) {
    std::vector<int> result(n);
    for (int i = 1; i <= n; ++i) {
        result[i - 1] = i;
    }
    return result;
}

int main() {
    std::vector<int> expected_values = {1, 2, 3};
    std::vector<int> result_values = f(3);
  
    assert(issame(result_values, expected_values));
    std::cout << "Test Passed!" << std::endl;
  
    return 0;
}