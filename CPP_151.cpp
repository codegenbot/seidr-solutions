#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(const vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && ((int)num % 2 != 0)) {
            sum += 2 * (long long)num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    float input;
    while (cin >> input) {
        lst.push_back(input);
    }

    long long result = double_the_difference(lst);
    cout << result << endl;

    return 0;
}