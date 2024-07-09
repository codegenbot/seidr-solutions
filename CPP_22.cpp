#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

namespace boost { namespace mpl {
template <>
struct is_same<int> : std::true_type {};
}

using namespace boost;

bool is_same(const any& a, const any& b) {
    return get<mpl::is_same>(a.type()) && get<mpl::is_same>(b.type());
}

vector<any> list_any() {
    vector<any> result;
    for (int i = 0; i < 6; ++i) {
        if (i == 1 || i == 2) {
            result.push_back(any('a'));
        } else if (i == 3 || i == 4) {
            result.push_back(any(3));
        } else {
            result.push_back(any('b'));
        }
    }
    return result;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_same(value, any(0))) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}