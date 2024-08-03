#include <vector>
#include <list>
#include <variant>
#include <cassert>
#include <typeinfo>

std::vector<int> filter_integers(std::list<std::variant<int, char>> values){
    std::vector<int> result;
    for (auto val : values) {
        if (std::holds_alternative<int>(val)) {
            result.push_back(std::get<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert(issame(filter_integers({std::variant<int, char>{3}, std::variant<int, char>{'c'}, std::variant<int, char>{3}, std::variant<int, char>{3}, std::variant<int, char>{'a'}, std::variant<int, char>{'b'}}), {3, 3, 3}));
    return 0;
}