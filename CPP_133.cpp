#include <vector>
#include <cmath>
#include <iostream>
#include <cassert>

using namespace std;

int sum_squares(vector<float> lst){
    int sum = 0;
    for (float num : lst) {
        sum += ceil(num) * ceil(num);
    }
    return sum;
}

int main() {
    assert(sum_squares({-1.0, 1.0, 0.0}) == 2);
    return 0;
}