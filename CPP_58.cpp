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
    int n;
    cin >> n;

    vector<vector<int>> v(n);
    for(int i=0; i<n; i++) {
        int m;
        cin >> m;
        v[i].resize(m);

        for(int j=0; j<m; j++) {
            cin >> v[i][j];
        }
    }

    vector<int> l1, l2;

    for(auto &x : v) {
        if(x.size() > 0) {
            l1.insert(l1.end(), x.begin(), x.end());
        }
    }

    for(int i=n-1; i>=0; i--) {
        if(v[i].size() > 0) {
            l2.push_back(i);
            break;
        }
    }

    vector<int> result = common(l1, l2);

    cout << "Common elements: ";
    for(auto x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0; 
}