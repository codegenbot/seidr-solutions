#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double double_the_difference(const vector<float>& lst) {
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    double odd_sum = 0.0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += pow(num, 2);
        }
    }
    assert (double_the_difference(lst) == odd_sum );

    return 0;
}