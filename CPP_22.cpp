#include <iostream>
#include <vector>
#include <list>
#include <variant>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> filter_integers(std::vector<std::variant<int, char>> values){
    std::vector<int> result;
    for (auto val : values) {
        if (std::holds_alternative<int>(val)) {
            result.push_back(std::get<int>(val));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({std::variant<int, char>(3), 'c', std::variant<int>(3), std::variant<int>(3), 'a', 'b'}), {3, 3, 3}));
    return 0;
}