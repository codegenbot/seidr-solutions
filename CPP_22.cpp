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
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

int mainTest() {
    vector<any> values = {3, make_any(3), 3, 'a', 'b'};
    assert(is_same(filter_integers({any_cast<int>(3), any('c'), int(3), int(3), any_cast<char>('a'), any_cast<char>('b')}), {int(3), int(3), int(3)}));
    return 0;
}