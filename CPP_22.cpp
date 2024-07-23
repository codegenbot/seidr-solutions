#include <vector>
#include <string>
#include <boost/any.hpp>
#include <list>
using namespace std;

typedef list<boost::any> list_any;
using namespace boost;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}