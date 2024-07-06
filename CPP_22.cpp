```cpp
#include <optional>
#include <vector>

bool std::operator==(const std::vector<int>& l, const std::vector<int>& r) {
    if (l.size() != r.size()) {
        return false;
    }
    for (size_t i = 0; i < l.size(); ++i) {
        if (l[i] != r[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> result = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(result == {3, 3, 3});
    return 0;
}

std::vector<int> filter_integers(std::vector<std::optional<int>> values) {
    std::vector<int> result = {};
    for (const auto& value : values) {
        if(value.has_value()) {
            int i = value.get();
            result.push_back(i);
        }
    }
    return result;
}