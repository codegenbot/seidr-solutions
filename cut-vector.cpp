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
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<int> ans;
    ans.pb(v[0]);
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] > ans[idx]) {
            idx++;
            ans.pb(v[i]);
        }
        else {
            int ii = lower_bound(all(ans), v[i]) - ans.begin();
            ans[ii] = v[i];
        }
    }
    cout << idx + 1 << "\n";
    for (int i = 0; i <= idx; i++) cout << ans[i] << " ";
    cout << "\n";
    return 0;
}
