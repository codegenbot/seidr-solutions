#include <vector>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

std::vector<int> filter_integers(const std::vector<boost::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    // Use boost::any to create vector with different data types
    std::vector<boost::any> input = {3, 'c', 3, 3, 'a', 'b'};
    assert(issame(filter_integers(input), {3, 3, 3}));
    return 0;
}