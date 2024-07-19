#include <boost/any.hpp>
#include <string>
#include <cassert>

template <typename T>
T compare_one(boost::any a, boost::any b) {
    if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
        return boost::any_cast<T>(a);
    } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
        return boost::any_cast<T>(b);
    }
    return boost::any_cast<T>(a);
}

int main() {
    auto a = boost::any(10);
    auto b = boost::any(5);
    assert(compare_one<int>(a, b) == 10);

    auto c = boost::any(7.5f);
    auto d = boost::any(3.2f);
    assert(compare_one<float>(c, d) == 7.5f);

    auto e = boost::any(std::string("20.3"));
    auto f = boost::any(std::string("12.8"));
    assert(compare_one<float>(e, f) == stof(boost::any_cast<std::string>(e)));

    return 0;
}