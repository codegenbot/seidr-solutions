#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void display(vector<int> l) {
    for(int i: l) cout << i << " ";
}

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> result(s.begin(), s.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    display(v);
    cout << endl;
    
    vector<int> uniqueV = unique(v);
    display(uniqueV);
    return 0;
}