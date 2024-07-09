#include <cassert>
using namespace std;

bool is_same(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main_func() {
    vector<any> values = {3, int(3), 3, 'a', 'b'};
    assert(is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), vector<int>{3, 3, 3}));
    return 0;
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