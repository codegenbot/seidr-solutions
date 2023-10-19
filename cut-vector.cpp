#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    vector<int> c;
    while(i < n && j < m) {
        if(a[i] == b[j]) {
            c.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i] < b[j]) i++;
        else j++;
    }
    cout << c.size() << endl;
    for(int i = 0; i < c.size(); i++) cout << c[i] << " ";
    cout << endl;
    i = 0, j = 0;
    while(i < n && j < m) {
        if(a[i] == b[j]) {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if(a[i] < b[j]) i++;
        else j++;
    }
    cout << endl;
    return 0;
}
