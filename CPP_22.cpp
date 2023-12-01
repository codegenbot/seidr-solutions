#include <vector>
#include <list>
#include <variant>
#include <cassert>

std::vector<int> filter_integers(std::list<std::variant<int, char>> values){
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::holds_alternative<int>(value)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}