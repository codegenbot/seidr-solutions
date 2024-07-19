#include <boost/any.hpp>
#include <string>
#include <cassert>

template <typename T>
T compare_one(const boost::any& a, const boost::any& b) {
    if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
        return boost::any_cast<T>(a);
    } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
        return boost::any_cast<T>(b);
    }
}

int main() {
    assert(compare_one<int>(5, 10) == 10);
    assert(compare_one<float>(5.5f, 3.3f) == 5.5f);
    assert(compare_one<std::string>("hello", "world") == "world");

    return 0;
}