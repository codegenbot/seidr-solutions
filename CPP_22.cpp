#include <iostream>
#include <vector>
#include <variant>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(initializer_list<std::variant<int>> values) {
    std::vector<int> result; 
    for (const auto& value : values) {
        try {
            int val = std::get<int>(value);
            if(std::find(result.begin(), result.end(), val) == result.end())
                result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

int main() {
    std::vector<std::variant<int>> values = {3, 'c', 3, 3, 'a', 'b'};
    auto result = filter_integers(values);
    assert (std::equal(result.begin(), result.end(), std::vector<int>({3, 3, 3}).begin()));
    return 0;
}