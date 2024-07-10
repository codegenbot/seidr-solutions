#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            vector<int> res(a.size());
            if (a[i] > b[i]) {
                fill(res.begin(), res.end(), 1);
            } else {
                fill(res.begin(), res.end(), 2);
            }
            return res;
        }
    }
    return true;
}

int main() {
    assert(issame({1,2,3,5},{-1,2,3,4}) == {2,0,0,1});
    return 0;
}