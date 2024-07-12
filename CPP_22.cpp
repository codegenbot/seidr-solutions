#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace std;
using namespace boost;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_same<any, int>::value && value.type() == typecode::int8) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}