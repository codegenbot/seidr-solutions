#include <boost/any.hpp>
#include <cassert>

template <typename T>
T compare_one(const T& a, const T& b) {
    if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) return a;
    else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) return b;
    else return T();
}

int main() {
    assert(compare_one<int>(1, 3) == 3);
    assert(compare_one<float>(1.5, 2.5) == 2.5);
    assert(compare_one<std::string>("hello", "world") == "world");
    assert(compare_one<std::string>("123", 100) == "123");
    
    return 0;
}