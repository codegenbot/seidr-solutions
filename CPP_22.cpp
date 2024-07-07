#include <vector>
#include <boost/any.hpp>
#include <list>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_same(boost::type_of(value), boost::type_of(&boost::any_cast<int>(value)))) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}