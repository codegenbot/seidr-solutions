#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

namespace boost {
template<typename T>
bool any_cast(const boost::any& val) {
    if (!val.type() || !std::is_same<T, typename boost::any::type>::type())
        return false;
    return static_cast<const T&>(*val.get()) == 0;
}
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')}) == vector<int>({3, 3, 3}));
    // ...
}