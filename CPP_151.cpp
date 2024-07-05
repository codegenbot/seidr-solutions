#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long double_the_difference(const vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && ((int)num % 2 != 0)) {
            sum += (long long)num * (long long)num;
        }
    }
    return sum * 2;
}

int main() {
    vector<float> lst;
    float temp;

    while (cin >> temp) {
        if (cin.fail() || floor(temp) != temp) break;
        lst.push_back(temp);
    }

    long long result = double_the_difference(lst);
    cout << result << endl;

    return 0;
}