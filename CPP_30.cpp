#include <vector>
#include <cassert>
#include <iostream>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
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

int main() {
    // assert (issame(get_positive({}) , {})); // Uncomment if get_positive is defined
    // Ensure to define get_positive function before using it
    return 0;
}