#include <vector>
#include <boost/any.hpp>

typedef std::vector<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            result.push_back(any_cast<int>(value).converted());
        }
    }
    return result;
}