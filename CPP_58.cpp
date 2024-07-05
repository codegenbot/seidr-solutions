#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
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
    int n, m;
    
    // Read sizes of the two arrays
    cin >> n >> m;

    vector<int> l1(n);
    vector<int> l2(m);
    
    // Read elements of the first array
    for (int i = 0; i < n; ++i) {
        cin >> l1[i];
    }
    
    // Read elements of the second array
    for (int i = 0; i < m; ++i) {
        cin >> l2[i];
    }

    // Get the common elements
    vector<int> result = common(l1, l2);

    // Print the common elements
    for (int elem : result) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}