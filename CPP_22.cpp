#include <iostream>
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

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}