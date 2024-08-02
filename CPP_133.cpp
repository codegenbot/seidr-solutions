#include <vector>
#include <cmath>

int sum_squares(const vector<int>& lst) {
    int sum = 0;
    for (int num : lst) {
        int rounded_num = ceil(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}