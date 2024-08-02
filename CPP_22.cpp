```cpp
#include <vector>
#include <list>
#include <boost/any.hpp>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == boost::any::typeclass<int>()) {
            int i = boost::any_cast<int>(value);
            result.push_back(i);
        }
    }
    return result;
}