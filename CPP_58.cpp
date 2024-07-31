#include <algorithm>
#include <set>
#include <vector>
#include <initializer_list>
#include <iostream>

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

    bool same = true;

    if(n > 1) {
        same = issame(v[0], v[1]);
        for(int i=2; i<n; i++) {
            same &= issame(v[0], v[i]);
        }
    }

    if(same) {
        vector<int> commonList;
        for(int i=0; i<v[0].size(); i++) {
            bool found = true;

            for(int j=1; j<n; j++) {
                if(find(v[j].begin(), v[j].end(), v[0][i]) == v[j].end()) {
                    found = false;
                    break;
                }
            }

            if(found) {
                commonList.push_back(v[0][i]);
            }
        }

        cout << "Common elements: ";
        for(int i=0; i<commonList.size(); i++) {
            cout << commonList[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No common elements." << endl;
    }

    return 0;
}