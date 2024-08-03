#include <vector> // Added missing header file

std::vector<int> filter_integers(std::list<std::variant<int, char>> values) {
    std::vector<int> result;
    for (auto val : values) {
        if (std::holds_alternative<int>(val)) {
            result.push_back(std::get<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) { // Corrected function signature
    return a == b;
}