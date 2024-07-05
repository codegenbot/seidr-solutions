#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && ((int)num % 2 != 0)) {
            sum += (long long)num * (long long)num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0, 2.0, 3.0, 4.5, 5.0};
    long long expected_output = 1*1 + 3*3 + 5*5;
    assert(double_the_difference(lst) == expected_output);
    cout << "Test passed!" << endl;
    return 0;
}