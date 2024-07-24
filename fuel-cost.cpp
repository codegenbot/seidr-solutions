#include <vector>
using namespace std;

int solve(const vector<int>& v) {
    int sum = 0;
    for (int x : v) {
        if (x >= 3) {
            sum += ((x/3)-2);
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << solve(v) << endl;
    return 0;
}