#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 0) cout << 0 << endl;
        else {
            vector<int> ans;
            while (n) {
                int a = n % 2;
                n /= 2;
                ans.push_back(a);
            }
            reverse(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i];
            }
            cout << endl;
        }
    }

    return 0;
}
