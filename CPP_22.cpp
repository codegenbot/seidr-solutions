#include <boost/any.hpp>
#include <vector>
#include <list>

namespace boost {
    namespace type_erasure {
        template<typename T1, typename T2>
        struct equal_to {
            bool operator()(const T1 &, const T2 &) const {
                return true;
            }
        };
    }
}

bool is_same(const boost::any &a, const boost::any &b) {
    return boost::get(boost::any_cast<boost::any>(boost::any(a).type()), b);
}

vector<int> filter_integers(list-any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_same(value, boost::any(int(0)))) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}