#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int sum = 0;
    for(int i = 0; i < n; i++) sum += a[i];
    vector<int> dp(sum / 2 + 1, 0);
    for(int i = 0; i < n; i++) {
        for(int j = sum / 2; j >= a[i]; j--) {
            dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
        }
    }
    cout << (sum - 2 * dp[sum / 2]) << endl;
    int left = 0, right = n - 1;
    while(left < n && right >= 0) {
        if(dp[sum / 2] == dp[sum / 2 - a[right]] + a[right]) {
            cout << a[right] << " ";
            dp[sum / 2] -= a[right--];
        } else left++;
    }
    cout << endl;
    left = 0, right = n - 1;
    while(left < n && right >= 0) {
        if(dp[sum / 2] == dp[sum / 2 - a[right]] + a[right]) {
            right--;
        } else {
            cout << a[left++] << " ";
        }
    }
    cout << endl;
    return 0;
}
