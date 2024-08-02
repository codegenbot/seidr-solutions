#include <vector>
#include <string>
#include <boost/any.hpp>
#include <list>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            try {
                int num = boost::any_cast<int>(value);
                result.push_back(num);
            } catch (boost::bad_any_cast&) {
                // ignore non-integers
            }
        }
    }
    return result;
}