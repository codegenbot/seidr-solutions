#include <cmath>
#include <vector>

using namespace std;

int sum_squares(vector<float> lst) {
    int sum = 0;
    for (float num : lst) {
        int roundedNum = ceil(num);
        sum += roundedNum * roundedNum;
    }
    return sum;
}