#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(const vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && ((int)num) % 2 != 0) {
            sum += (long long)num * (long long)num;
        }
    }
    return 2 * sum;
}

int main() {
    vector<float> lst;
    float input;
    while (cin >> input) {
        lst.push_back(input);
    }
    cout << double_the_difference(lst) << endl;
    return 0;
}