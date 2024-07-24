#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

bool issame(const boost::any& a, const boost::any& b) {
    return a.type() == b.type();
}

vector<int> filter_integers(const std::list<boost::any>& values) {
    vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    // Test the functions here
    return 0;
}