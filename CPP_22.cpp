#include <iostream>
#include <vector>
#include <typeinfo>
#include <cassert>
#include <boost/any.hpp>

std::vector<int> filter_integers(const std::vector<boost::any>& values) {
    std::vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    std::cout << "All tests passed!" << std::endl;
    return 0;
}