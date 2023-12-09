#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    vector<int> vec;
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    for (int i = 0; i < vec.size(); i++) {
        sum += round((vec[i] / 3) - 2);
    }
    cout << sum << endl;
    return 0;
}