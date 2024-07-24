#include <vector>
using namespace std;

int solve(vector<int>& v) {
    int sum = 0;
    for(int i : v) {
        int x = (i / 3) - 2;
        sum += x;
    }
    return sum;
}

int main() {
    int n, a[100];
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> v(a, a+n);
    cout << solve(v) << endl;
    return 0;
}