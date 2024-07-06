```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            const int integer = boost::get<int>(value);
            if (integer != 0) {
                result.push_back(integer);
            }
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, boost::any(3), 3, boost::any(3), 'a', 'b'}), {3, 3, 3}));
    return 0;
}