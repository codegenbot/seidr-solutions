```cpp
#include <vector>
#include <set>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));
    vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    vector<pair<string, int>> inputs;
    cout << "Enter the number of pairs: ";
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string s1;
        int l1;
        cout << "Enter pair" << (i+1) << ": ";
        cin >> s1 >> l1;
        inputs.push_back({s1, l1});
    }
    
    for(auto p : inputs) {
        vector<int> v = common(p.second, {p.second});
        if(v.size() == 0) cout << "No common elements found." << endl;
        else {
            cout << "Common elements: ";
            for(int x : v) cout << x << " ";
            cout << endl;
        }
    }
}