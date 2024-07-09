#include <boost/optional.hpp>
#include <vector>
#include <list>

using namespace std;
using namespace boost;

bool issame(vector<any> a, vector<any> b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        any& value_a = a[i];
        any& value_b = b[i];
        if (!any_cast<bool>(value_a) || !any_cast<bool>(value_b))
            continue;
        if (any_cast<int>(value_a) != any_cast<int>(value_b))
            return false;
    }
    return true;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<bool>(value)) {
            int num = any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;