#include <algorithm>
bool isSameVectors(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<string> v1 = splitString("ahmed     , gamal");
    sort(v1.begin(), v1.end()); 
    assert(isSameVectors(v1, {"ahmed", "gamal"}));
    return 0;
}