#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    vector<int> v;
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++) {
        sum += floor((v[i] - 2) / 3);
    }
    cout << sum << endl;
    return 0;
}