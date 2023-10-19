#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}
