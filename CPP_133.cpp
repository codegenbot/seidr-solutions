#include <vector>
#include <cmath>

int sum_squares(vector<float> lst) {
    int sum = 0;
    for (float num : lst) {
        sum += pow(num, 2);
    }
    return sum;
}