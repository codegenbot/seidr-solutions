#include <vector>
#include <set>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> result;
    for (int i : s1) {
        if (s2.find(i) != s2.end()) {
            result.insert(i);
        }
    }

    vector<int> v(result.begin(), result.end());
    return v;
}