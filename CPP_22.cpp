#include <boost/any.hpp>
#include <iostream>
#include <list>
#include <vector>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        int cast_value = boost::any_cast<int>(value);
        if (!boost::any_cast<bool>(value)) {
            continue;
        }
        result.push_back(cast_value);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, boost::any(3), 3, boost::any(3), 'a', 'b'}), {3, 3, 3}));
    return 0;
}