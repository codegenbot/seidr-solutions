#include <cmath>

int sum_squares(vector<float> lst) {
    int sum = 0;
    for (float x : lst) {
        sum += ceil(x) * ceil(x);
    }
    return sum;
}