#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && ((int)num) % 2 != 0) {
            sum += ((int)num) * ((int)num);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0, 2.0, 3.5, 5.0, -1.0, 6.0};
    long long expected_sum = 1*1 + 5*5; // 26
    assert(double_the_difference(lst) == expected_sum);
    cout << "Test passed!" << endl;
    return 0;
}