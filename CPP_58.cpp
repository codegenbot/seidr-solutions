```
#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> result(s1.size() < s2.size() ? s1.size() : s2.size());
    auto it = std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), result.begin());
    result.resize(std::distance(result.begin(), it));

    return result;
}

int main() {
    assert(isSame(common({4, 3, 2, 8}, {}), {}));
}