#include <vector>
#include <cassert>
#include <initializer_list>
#include <algorithm>

using namespace std;

bool is_same(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(initializer_list<any> values) {
    vector<int> result; 
    for (const auto& value : values) {
        try {
            int val = any_cast<int>(value);
            if(find(result.begin(), result.end(), val) == result.end())
                result.push_back(val);
        } catch (bad_any_cast&) {
            // handle non-integer values
        }
    }
    return result;
}

int mainTest() {
    vector<any> values = {(int)3, (char)3, "hello"};
    assert(is_same(filter_integers(values), vector<int>({3})));
    return 0;
}