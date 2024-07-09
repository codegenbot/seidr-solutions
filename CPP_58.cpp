#include <iostream>
#include <vector>
#include <set>

bool issame(int a, int b) {
    return (a == b);
}

int common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      inserter(intersection, intersection.begin()));

    vector<int> result(intersection.begin(), intersection.end());
    return (result.size());
}

int main() {
    int n1, m1, n2, m2;
    cin >> n1 >> m1;
    vector<int> l1(n1);
    for (int i = 0; i < n1; i++) {
        cin >> l1[i];
    }
    cin >> n2 >> m2;
    vector<int> l2(n2);
    for (int i = 0; i < n2; i++) {
        cin >> l2[i];
    }

    int k = common(l1, l2);

    cout << k << endl;

    return 0;
}