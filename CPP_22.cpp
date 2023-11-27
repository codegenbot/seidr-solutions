#include <vector>
#include <list>
#include <iostream>
#include <variant>

std::vector<int> filter_integers(std::list<int> values) {
    std::vector<int> result;
    for (auto value : values) {
        if (auto* intValue = std::get_if<int>(&value)) {
            result.push_back(*intValue);
        }
    }
    return result;
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    return isSame(filtered, {3, 3, 3});
}