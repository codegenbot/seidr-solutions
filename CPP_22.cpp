```cpp
#include <optional>
#include <vector>

bool isEqual(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(value.type() == typeid(std::optional<int>)) {
            auto optionalInt = boost::any_cast<std::optional<int>>(value);
            if(optionalInt.has_value()) {
                result.push_back(optionalInt.get());
            }
        }
    }
    return result;
}

int main() {
    assert(isEqual(filter_integers({std::optional<int>(3), 'c', std::optional<int>(3), 3, std::optional<int>('a'), 'b'}), {3, 3, 3}) );
    return 0;
}