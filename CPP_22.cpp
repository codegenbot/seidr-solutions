```cpp
#include <boost/any.hpp>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;
namespace boost { namespace detail {
template <typename T>
bool is_same(const boost::any& a, const T& t) {
    return a.type() == typeid(T) && static_cast<const T>(a) == t;
}
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value, 0)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return static_cast<vector<int>>(result);
}

int main() {
    assert(is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), (vector<int>{{3}, {3}, {3}})));
    // ...
}