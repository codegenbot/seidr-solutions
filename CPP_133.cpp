#include <cmath>
#include <vector>

using namespace std;

int sum_squares(vector<float> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        int roundedNum = ceil(lst[i]);
        sum += pow(roundedNum, 2);
    }
    return sum;
}