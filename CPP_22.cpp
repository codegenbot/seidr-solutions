```cpp
#include <vector>
#include <any>
#include <boost/any.hpp>
#include <boost/optional.hpp>
#include <boost/type_index.hpp>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<boost::optional<int>>(value)) {
            if (boost::any_cast<boost::optional<int>>(value).has_value()) {
                result.push_back(boost::any_cast<int>(value));
            }
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}