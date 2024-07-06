```cpp
#include <iostream>
#include <vector>
#include <list>
#include <any>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type()->is_same_v<std::any::type<char>>()) {
            continue;
        }
        if (std::any_cast<int>(value).has_value()) {
            result.push_back(std::any_cast<int>(value).get());
        }
    }
    return result;
}

int main() {
    std::list<std::any> values = {10, 20, 'a', 'b', 30.5f, "hello"};
    std::vector<int> output = filter_integers(values);
    for (const auto& num : output) {
        std::cout << num << "\n";
    }
}