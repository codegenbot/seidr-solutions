```cpp
#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    return (a == b);
}

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
    int n1, m1, n2, m2;
    cout << "Enter the number of elements for the first list: ";
    cin >> n1;
    vector<int> l1(n1);
    cout << "Enter the elements for the first list: ";
    for (int i = 0; i < n1; i++) {
        cin >> l1[i];
    }
    
    cout << "Enter the number of elements for the second list: ";
    cin >> m2;
    vector<int> l2(m2);
    cout << "Enter the elements for the second list: ";
    for (int i = 0; i < m2; i++) {
        cin >> l2[i];
    }
    
    vector<int> output = common(l1, l2);
    if(output.size() == 0) cout << "The lists have no common elements.\n";
    else {
        cout << "The lists have the following common elements: ";
        for (int i : output) {
            cout << i << " ";
        }
        cout << "\n";
    }
    
    return 0;
}