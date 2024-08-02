#include <boost/any.hpp>
#include <vector>
#include <list>
#include <cassert>

bool boost_any_issame(const boost::any& a, const boost::any& b) {
    return &boost::any_cast<const boost::any&>(a) == &boost::any_cast<const boost::any&>(b);
}

int main() {
    assert(boost_any_issame(boost::any(1), boost::any(1)));
    assert(!boost_any_issame(boost::any(1), boost::any("2")));
    return 0;
}