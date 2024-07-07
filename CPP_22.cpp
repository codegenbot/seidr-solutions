#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<bool>(value)) {
            int val = any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;