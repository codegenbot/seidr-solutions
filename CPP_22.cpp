#include <vector>
#include <cassert>
#include <initializer_list>
using namespace std;

bool is_same(const vector<any>& a, const vector<any>& b) {
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

int main_func() {
    vector<any> values = {3, any(3), 3, 'a', 'b'};
    vector<any> expectedValues = {any(3), any(3), any(3)};
    assert(is_same(vector<any>(expectedValues.begin(), expectedValues.end()), filter_integers({any(3), 'c', 3, 3, 'a', 'b'})));
    return 0;
}