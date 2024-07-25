#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> common;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(common, next(common.end())));

    vector<int> result(common.begin(), common.end());
    return result;
}

int main() {
    vector<int> l1, l2;
    int n1, n2;
    while (cin >> n1) {
        l1.push_back(n1);
        if (n1 == -1) break;  
    }
    while (cin >> n2) {
        l2.push_back(n2);
        if (n2 == -1) break;
    }
    vector<int> result = common(l1, l2);
    return 0;
}