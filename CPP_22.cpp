```cpp
#include <iostream>
#include <vector>
#include <variant>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::variant<int>> filter_integers(std::init_list<std::variant<int>> values) {
    std::vector<std::variant<int>> result({std::in_place_index<0>, 3}, {std::in_place_index<0>, 123}, {std::in_place_index<0>, 3}, {std::in_place_index<0>, 1}, {std::in_place_index<0>, 2});
    return result;
}

int main() {
    std::vector<int> integers = filter_integers({3i, 123i, 3i, 3i, 1i, 2i});
    if (issame({1, 2}, integers)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
    return 0;
}