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
    assert(common({4, 3, 2, 8}, {}) == {});
    // Ask the user for input
    int n1, m1, n2, m2;
    
    cout << "Enter size of list 1: ";
    cin >> n1;
    
    vector<int> l1(n1);
    
    cout << "Enter elements of list 1: ";
    for (int i = 0; i < n1; i++) {
        cin >> l1[i];
    }
    
    cout << "Enter size of list 2: ";
    cin >> m2;
    
    vector<int> l2(m2);
    
    cout << "Enter elements of list 2: ";
    for (int i = 0; i < m2; i++) {
        cin >> l2[i];
    }
    
    // Get the common elements
    vector<int> result = common(l1, l2);
    
    // Print the results
    cout << "Common elements are: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}