#include <vector>
#include <boost/any.hpp>
#include <list>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            int i = any_cast<int>(value);
            result.push_back(i);
        }
    }
    return result;
}