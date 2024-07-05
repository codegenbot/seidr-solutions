#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

long long int double_the_difference(const vector<float>& lst) {
    long long int sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && (int)num % 2 != 0) {
            sum += 2 * (int)num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0, 3.0, 2.0, -3.0, 5.0};
    long long int odd_sum = 18;
    assert(double_the_difference(lst) == odd_sum);
    cout << double_the_difference(lst) << endl;
    return 0;
}