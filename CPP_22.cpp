#include <vector>
#include <list>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (!value.type().is_stateless_any_castable_to<int>()) continue;
        int num = boost::any_cast<int>(value);
        if (num != 0) {
            result.push_back(num);
        }
    }
    return result;
}