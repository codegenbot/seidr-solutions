```cpp
#include <vector>
#include <string>

using namespace std;

vector<string> reverseDelete(vector<string>& v) {
    for (int i = v.size() - 1; i >= 0; --i) {
        if (!v[i].empty()) {
            break;
        }
        v.erase(v.begin() + i);
    }
    return v;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void test() {
    vector<string> v1 = {"mamma"};
    vector<string> result1 = reverseDelete(v1);
    
    assert(issame(vector<string>({"", "True"}), result1));
    
    vector<string> v2 = {"mia"};
    vector<string> result2 = reverseDelete(v2);
    
    assert(issame(vector<string>({"True"}), result2));
}