#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/type_traits.hpp>

using namespace std;
using namespace boost;

bool is_same(const vector<int>& v1, const vector<int>& v2) {
    return (v1.size() == v2.size()) && equal(v1.begin(), v1.end(), v2.begin());
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}