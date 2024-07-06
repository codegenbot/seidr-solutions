#include <optional>
#include <vector>
#include <list>
#include <any>
#include <boost/any.hpp>

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

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

int main() {
    auto values = std::list<std::any>{std::optional<int>(3), 'c', std::optional<int>(3), 3, 'a', 'b'};
    assert(std::equal(filter_integers(values).begin(), filter_integers(values).end(), {3, 3, 3}));
}