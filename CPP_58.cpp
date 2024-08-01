#include <vector>
#include <set>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> result;
    for (int x : s1) {
        if (s2.find(x) != s2.end()) {
            result.push_back(x);
        }
    }

    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}