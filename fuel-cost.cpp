#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &v) {
    int sum = 0;
    for (int i : v) {
        int x = (i / 3);
        sum += max(x - 2, 0);
    }
    return sum;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << solve(v) << endl;
    return 0;
}