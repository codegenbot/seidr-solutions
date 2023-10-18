#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define eps 1e-8
#define pi 3.14159265
const ll MOD = 998244353;
const ll INF = 1e9 + 7;

using namespace std;
/*
You are given an array of integers. Find the length of the longest increasing subsequence (not necessarily contiguous) in the array.
Example:
[0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15]
The following input should return 6 since the longest increasing subsequence is 0, 2, 6, 9 , 11, 15.
*/
int main() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> dp(n, INF);
    for(int i = 0; i < n; i++) {
        int idx = lower_bound(all(dp), a[i]) - dp.begin();
        dp[idx] = a[i];
    }
    int ans = lower_bound(all(dp), INF) - dp.begin();
    cout << ans << endl;
    vector<int> res;
    for(int i = n - 1; i >= 0; i--) {
        if(dp[i] != INF) {
            res.pb(dp[i]);
        }
    }
    reverse(all(res));
    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
    cout << endl;
    return 0;
}
