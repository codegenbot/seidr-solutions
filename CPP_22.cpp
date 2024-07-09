```cpp
#include <vector>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

typedef boost::any list_any;

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
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, boost::any(3), 3, boost::any(3), 'a', 'b'}), {3, 3, 3}));
    return 0;
}