#include <boost/any.hpp>
#include <vector>
#include <list>
#include <cassert>

namespace boost {
    namespace detail {

        template<typename T>
        struct is_same : public std::false_type {};

        template<typename T>
        struct is_same<T, T> : public std::true_type {};
    }

    bool is_same(const any& a, const any& b) {
        return detail::is_same<decltype(a.get()), decltype(b.get())>::value;
    }
}

using namespace boost;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good() && is_same(value, boost::any(int(0)))) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}