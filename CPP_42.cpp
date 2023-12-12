```
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(const std::vector<int>& v) {
    std::vector<int> result;
    for (auto x : v) {
        result.push_back(x + 1);
    }
    return result;
}

std::vector<int> decr_list(const std::vector<int>& v) {
    std::vector<int> result;
    for (auto x : v) {
        result.push_back(x - 1);
    }
    return result;
}

int main() {
    // Test code
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = incr_list(v1);
    std::cout << "Incremented list: ";
    for (auto x : v2) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::vector<int> v3 = decr_list(v1);
    std::cout << "Decremented list: ";
    for (auto x : v3) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    if (issame(v2, v3)) {
        std::cout << "The lists are the same." << std::endl;
    } else {
        std::cout << "The lists are not the same." << std::endl;
    }

    return 0;
}
```