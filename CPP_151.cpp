#include <bits/stdc++.h>
using namespace std;
long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}
int main() {
    vector<float> list;
    float num;
    while (cin >> num && num != -1.0) {
        list.push_back(num);
    }
    cout << double_the_difference(list) << endl;
    return 0;
}