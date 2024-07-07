```cpp
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> set1(l1.begin(), l1.end());
    set<int> set2(l2.begin(), l2.end());
    set<int> intersection;
    intersection = set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
        inserter(intersection, intersection.begin()));
    vector<int> result(intersection.begin(), intersection.end());
    return result;
}

int main() {
    int n1, m1, n2, m2;
    cin >> n1 >> m1 >> n2 >> m2;
    vector<int> l1(m1);
    for(int i=0; i<m1; i++){
        cin >> l1[i];
    }
    vector<int> l2(m2);
    for(int i=0; i<m2; i++){
        cin >> l2[i];
    }
    vector<int> result = common(l1, l2);
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
        if(i+1==result.size()) cout<<"]";
        else cout<<"], [";
    }
    return 0;
}