#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l) {
    std::vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}

int main() {
    std::vector<int> a, b;
    int n;
    
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        a.push_back(num);
    }
    
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        b.push_back(num);
    }
    
    std::vector<int> testVector = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    assert(issame(incr_list(testVector), b));    
    
    return 0;
}