#include <boost/any.hpp>
#include <iostream>

bool issame(const boost::any& a, const boost::any& b) {
    return a.type() == b.type();
}

int main() {
    std::list<boost::any> values;
    // Add your code here
    assert(issame(values.front(), values.back()));
    return 0;
}