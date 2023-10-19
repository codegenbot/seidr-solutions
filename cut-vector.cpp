#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        mp[a[i]]++;
        if(mp[a[i]] == m) cnt++;
    }
    cout << cnt << endl;
    for(int i = 0; i < n; i++) {
        mp[a[i]]--;
        if(mp[a[i]] == m - 1) cout << a[i] << endl;
    }
    return 0;
}
