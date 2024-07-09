#include <vector>
using namespace std;

int solve(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3 - 2;
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;
}

int main() {
    int n, num;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[i] = num;
    }
    cout << solve(v) << endl;
    return 0;
}