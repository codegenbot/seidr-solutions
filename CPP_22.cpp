#include <vector>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any list_any;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : boost::any_cast<vector<list_any>>(values)) {
        for (const auto& item : boost::any_cast<vector<any>>(value)) {
            if (boost::any_cast<any>(item).type() == typeid(int)) {
                result.push_back(boost::any_cast<int>(item));
            }
        }
    }
    return result;
}

int main() {
    vector<list_any> values = {3, any('c'), 3, 3, any('a'), any('b')};
    assert(issame(filter_integers(values), {3, 3, 3}));
    return 0;
}