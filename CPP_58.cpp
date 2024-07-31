```cpp
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i].size() != b[i].size()) return false;
    }
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      inserter(intersection, intersection.begin()));

    vector<int> result(intersection.begin(), intersection.end());
    return result;
}

int main() {
    int n1, m1, n2, m2;
    cin >> n1 >> m1 >> n2 >> m2;

    vector<vector<int>> a(n1, vector<int>(m1));
    vector<vector<int>> b(n2, vector<int>(m2));

    for(int i=0; i<n1; i++) {
        for(int j=0; j<m1; j++) {
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n2; i++) {
        for(int j=0; j<m2; j++) {
            cin >> b[i][j];
        }
    }

    bool same = issame(a, b);

    if(same) {
        vector<int> l1(m1);
        for(int i=0; i<m1; i++) l1[i] = a[0][i];
        vector<int> l2(m2);
        for(int i=0; i<m2; i++) l2[i] = b[0][i];

        vector<int> result = common(l1, l2);

        cout << "The common elements are: ";
        for(int i=0; i<result.size(); i++) {
            cout << result[i];
            if(i < result.size() - 1) cout << " ";
        }
        cout << endl;
    } else {
        cout << "Arrays are not the same." << endl;
    }

    return 0;
}