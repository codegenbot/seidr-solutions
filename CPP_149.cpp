#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[b.size()-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(same({{"aaaa", "bbbb"}, {"cc", "dd"}} , {{"cc", "dd"}, {"aaaa", "bbbb"}}));
    return 0;
}