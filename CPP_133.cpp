#include <cmath>
#include <vector>
#include <cassert>

int sum_squares(std::vector<float> lst){
    int result = 0;
    for (float num : lst) {
        int ceilNum = ceil(num);
        result += pow(ceilNum, 2);
    }
    return result;
}

int main() {
    assert(sum_squares({-1,1,0})==2);
}