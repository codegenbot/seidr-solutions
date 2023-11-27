#include <cmath>
#include <vector>

using namespace std;

int sum_squares(vector<float> lst) {
    int sum = 0;
    for (float num : lst) {
        sum += ceil(num) * ceil(num);
    }
    return sum;
}