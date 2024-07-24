#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(const boost::any& a1, const boost::any& a2) {
    return a1.type() == a2.type();
}

std::vector<int> filter_integers(const std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    // Test your functions here
    return 0;
}