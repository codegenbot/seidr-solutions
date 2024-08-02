#include <algorithm>
#include <vector>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(const boost::any& value) {
    std::vector<int> result;
    for (const auto& val : boost::any_cast<std::vector<boost::any>>(value)) {
        if (boost::any_cast<int>(val).good()) {
            result.push_back(boost::any_cast<int>(val).get());
        }
    }
    return result;
}

int main() {
    std::vector<boost::any> values = {3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')};
    assert(issame(filter_integers(values), {3, 3, 3}));
    return 0;
}