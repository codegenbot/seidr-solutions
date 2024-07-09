#include <vector>
#include <cmath>
#include <assert.h>

using namespace std;

int sum_squares(vector<float> lst) {
    int total = 0;
    for (float num : lst) {
        double roundedNum = ceil(num);
        total += pow(roundedNum, 2);
    }
    return total;
}

int main() {
    assert(sum_squares({-1,1,0})==2);
    return 0;
}