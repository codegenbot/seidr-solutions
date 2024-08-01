#include <vector>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<optional<int>>(value)) {
            result.push_back(any_cast<optional<int>>(value).get());
        }
    }
    return result;
}