```cpp
#include <boost/any.hpp>
#include <iostream>
#include <list>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        int casted_value = boost::any_cast<int>(value);
        if (!boost::any_cast<bool>(value)) {
            result.push_back(casted_value);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {1, 2, 3}) == false);
}