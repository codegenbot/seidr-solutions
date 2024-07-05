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
    vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long long odd_sum = 1 * 1 + 3 * 3 + 5 * 5; // 1 + 9 + 25 = 35
    assert(double_the_difference(lst) == odd_sum);
    cout << "Test passed!" << endl;
    return 0;
}