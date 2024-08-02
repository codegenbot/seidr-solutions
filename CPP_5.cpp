#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> intersperse(const std::vector<int>& input, int value) {
    std::vector<int> result;
    for (size_t i = 0; i < input.size(); ++i) {
        result.push_back(input[i]);
        if (i != input.size() - 1) {
            result.push_back(value);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

int main() {
    assert (issame(intersperse({2, 2, 2}, 2), std::vector<int>{2, 2, 2, 2, 2}));
    return 0;
}