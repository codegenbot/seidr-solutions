#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

typedef list<boost::any> list_any;
vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}