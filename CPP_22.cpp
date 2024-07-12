#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace std;
using namespace boost;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).which() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}