#include <vector>
#include <boost/variant.hpp>

std::vector<int> filter_integers(std::vector<boost::variant<int>> values) {
    std::vector<int> result;
    for (const auto& value : boost::apply_visitor(
            boost::static_visitor<bool>(),
            [&result](int x) { result.push_back(x); },
            [](auto) { return false; })(values)) {
        if constexpr(boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}