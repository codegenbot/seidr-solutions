#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        int val = boost::any_cast<int>(value);
        bool is_positive = (val > 0);
        if (is_positive && !issame(result, {val})) {
            result.push_back(val);
        }
    }
    return result;
}