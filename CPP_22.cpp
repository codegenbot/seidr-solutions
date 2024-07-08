#include <vector>
#include <any>
#include <boost/variant.hpp>

#include <boost/config.hpp>
#include <boost/variant/recursive_wrapper.hpp>
#include <boost/mpl/list.hpp>
#include <boost/mpl/vector.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <type_traits>

using boost::variant;

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<variant<int>> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            result.push_back(get<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({variant<int>(3)}, {variant<int>(3), variant<int>(3)}), {3, 3, 3}));
    return 0;
}