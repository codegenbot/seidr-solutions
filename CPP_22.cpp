#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::initializer_list<int> values) {
    std::vector<int> result;
    for (int value : values) {
        bool found = false;
        for (auto& v : result) {
            if (v == value) {
                found = true;
                break;
            }
        }
        if (!found)
            result.push_back(value); 
    }
    return result;
}

int main() {
    std::vector<int> integers = filter_integers({1, 2, 3});
    if (issame({1, 2}, integers)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
    return 0;
}