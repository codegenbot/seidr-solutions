```cpp
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<string> b = {"cc", "dd", "aaaa", "bbbb"};
    assert(issame({"cccc", "dddd", "aaaaa", "bbbbb"}, b));
    return 0;
}