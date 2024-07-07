#include <bits/stdc++.h>
using namespace std;
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}
int main() {
    vector<float> lst;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        float x;
        cin >> x;
        lst.push_back(x);
    }
    cout << double_the_difference(lst) << endl;
    return 0;
}