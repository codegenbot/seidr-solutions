#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int> common(const vector<int>& l1, const vector<int>& l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    vector<int> result;

    for (int elem : s1) {
        if (s2.find(elem) != s2.end()) {
            result.push_back(elem);
        }
    }

    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n1, n2;
    cin >> n1;
    vector<int> l1(n1);
    for (int i = 0; i < n1; ++i) {
        cin >> l1[i];
    }

    cin >> n2;
    vector<int> l2(n2);
    for (int i = 0; i < n2; ++i) {
        cin >> l2[i];
    }

    vector<int> result = common(l1, l2);
    for (int n : result) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}