#include <vector>
#include <cassert>
using namespace std;

bool is_same(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list<any> values) {
    vector<int> result; 
    for (const auto& value : values) {
        try {
            int val = any_cast<int>(value);
            if(find(result.begin(), result.end(), val) == result.end())
                result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

int main_func() {
    list<any> values;
    for (auto i : {3, 3, 'a', 'b'}) {
        values.push_back(i);
    }
    assert(is_same(filter_integers(values), vector<int>{3, 3, 3}));
    return 0;
}