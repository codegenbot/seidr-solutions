#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace std;
using namespace boost;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_same<int>::value == is_same<decltype(boost::any_cast(value)), int>::value) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}