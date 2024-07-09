#include <iostream>
#include <vector>
#include <variant>

bool std::issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::variant<int>> filter_integers(initializer_list<std::variant<int>> values) {
    std::vector<std::variant<int>> result;
    for (const auto& value : values) {
        try {
            if (value.index() == 0) { 
                int val = std::get<int>(value);
                bool found = false;
                for (auto& v : result) {
                    if (v.index() == 0 && std::get<int>(v) == val) {
                        found = true;
                        break;
                    }
                }
                if (!found)
                    result.push_back(value); 
            }
        } catch (...) {
            // ignore non-integer values
        }
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