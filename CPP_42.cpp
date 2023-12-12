```
#include <iostream>
#include <vector>

// Define _M_max_size for new_allocator
template<typename T>
struct new_allocator {
    // ...
    size_t _M_max_size() const { return std::numeric_limits<size_t>::max(); }
};

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

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test code
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = incr_list(vec1);
    std::cout << "Incremented list: ";
    for (auto x : vec2) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::vector<int> vec3 = decr_list(vec1);
    std::cout << "Decremented list: ";
    for (auto x : vec3) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    if (issame(vec2, vec3)) {
        std::cout << "The lists are the same." << std::endl;
    } else {
        std::cout << "The lists are not the same." << std::endl;
    }

    return 0;
}
```