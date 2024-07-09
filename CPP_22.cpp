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

int main() {
    vector<any> values = {3, any(3), 3, 'a', 'b'};
    assert(is_same(vector<int>({any(3), 'c', 3, 3, 'a', 'b'})), vector<int>({any(3), 'c', 3, 3, 'a', 'b'}));
    return 0;
}