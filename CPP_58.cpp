#include <set>
#include <algorithm>

bool issame(int x) {
    // Code for the function goes here
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> common;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(common, common.begin()));

    vector<int> result(common.begin(), common.end());
    return result;
}

int main() {
    // Read input from user
    int n;
    cin >> n;

    // Generate input arrays l1 and l2
    vector<int> l1(n);
    for (int i = 0; i < n; ++i) {
        cin >> l1[i];
    }

    vector<int> l2(n);
    for (int i = 0; i < n; ++i) {
        cin >> l2[i];
    }

    // Call the function
    vector<int> result = common(l1, l2);

    // Output result
    cout << "Common elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}