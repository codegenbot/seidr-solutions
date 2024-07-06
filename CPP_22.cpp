#include <optional>
#include <vector>
#include <list>
#include <any>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(value.type() == typeid(std::optional<int>)) {
            auto optionalInt = std::any_cast<std::optional<int>>(value);
            if(optionalInt.has_value()) {
                result.push_back(optionalInt.get());
            }
        }
    }
    return result;
}

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

int main() {
    auto values = {std::optional<int>(3), 'c', std::optional<int>(3), 3, 'a', 'b'};
    std::list<std::any> valuesList(values.begin(), values.end());
    assert(std::equal(filter_integers(valuesList).begin(), filter_integers(valuesList).end(), std::vector<int>{3, 3, 3}));
}