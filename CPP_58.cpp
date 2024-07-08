#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool issame(vector<int> l1, vector<int> l2) {
    if(l1.size() != l2.size()) 
        return false;
    
    for(int i=0; i<l1.size(); i++) {
        if(l1[i] != l2[i]) 
            return false;
    }
    
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    return vector<int>(intersection.begin(), intersection.end());
}

int main() {
    int n,m;
    cout << "Enter size of first array: ";
    cin >> n;
    cout << "Enter elements of first array: ";
    vector<int> l1(n);
    for(int i=0; i<n; i++) 
        cin >> l1[i];
    
    cout << "Enter size of second array: ";
    cin >> m;
    cout << "Enter elements of second array: ";
    vector<int> l2(m);
    for(int i=0; i<m; i++) 
        cin >> l2[i];

    if(issame(l1, l2)) {
        cout << "Two arrays are same.\n";
    } else {
        cout << "Two arrays are not same.\n";
    }

    return 0;
}