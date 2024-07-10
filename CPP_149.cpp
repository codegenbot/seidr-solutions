#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        vector<string> temp = {a[i], b[i]};
        sort(temp.begin(), temp.end());
        if (temp[0] != temp[1]) {
            return false;
        }
    }
    return true;
}