#include <optional>
#include <vector>
#include <list>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(const auto* optionalInt = value.try_emplace<std::optional<int>>()) {
            if(optionalInt->has_value()) {
                result.push_back(*optionalInt);
            }
        }
    }
    return result;
}

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

int main() {
    auto values = std::list<std::any>{std::in_place_type(std::optional<int>), 3, 'c', std::in_place_type(std::optional<int>), 3, 3, 'a', 'b'};
    assert(std::equal(filter_integers(values).begin(), filter_integers(values).end(), {3, 3, 3}));
}