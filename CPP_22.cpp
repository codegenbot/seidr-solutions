#include <vector>
#include <list>
#include <boost/any.hpp>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            int val = any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}