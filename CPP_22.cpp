#include <vector>
#include <list>
#include <variant>
#include <cassert>
#include <iostream>

std::vector<int> filter_integers(const std::list<std::variant<int, char>>& values){
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::holds_alternative<int>(value)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    std::cout << "Assertion passed!" << std::endl;
    return 0;
}