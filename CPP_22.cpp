#include <vector>
#include <cassert>
#include <iostream>
#include <type_traits>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

template<typename T>
bool is_integer(const T& value) {
    return std::is_same_v<T, int> || std::is_same_v<T, char>;
}

std::vector<int> filter_integers(const std::vector<int>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (is_integer<decltype(value)>(value)) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    std::vector<int> filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    
    return 0;
}