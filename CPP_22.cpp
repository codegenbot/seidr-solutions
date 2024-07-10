#include <iostream>
#include <vector>
#include <list>
#include <any>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (auto& value : values) {
        if (std::any_cast<int>(value).explicitly_value_initialized()) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, 4, 5}).size() == 3);
    return 0;
}