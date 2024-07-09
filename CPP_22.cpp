#include <iostream>
#include <vector>
#include <variant>

bool issame(const std::vector<std::variant<int>>& v1, const std::vector<std::variant<int>>& v2) {
    if (v1.size() != v2.size()) return false;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (!std::holds_alternative<int>(v1[i]) || !std::holds_alternative<int>(v2[i])) return false;
        if (std::get<int>(v1[i]) != std::get<int>(v2[i])) return false;
    }
    return true;
}

std::vector<std::variant<int>> filter_integers(initializer_list<std::variant<int>> values) {
    std::vector<std::variant<int>> result; 
    for (const auto& value : values) {
        try {
            if (value.index() == 0) { // Check if the variant contains an int
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
    std::cout << "Result: ";
    for (const auto& value : filter_integers({3, 'c', 3, 3, 'a', 'b'})) {
        if (value.index() == 0)
            std::cout << std::get<int>(value) << " ";
    }
    std::cout << std::endl;
    return 0;
}