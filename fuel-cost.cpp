#include <vector>
using namespace std;

int solve(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = ((i / 3) - 2);
        sum += result;
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