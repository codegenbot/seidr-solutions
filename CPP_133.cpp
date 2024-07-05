#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

int sum_squares(vector<float> lst) {
    int sum = 0;
    for (float num : lst) {
        int ceil_num = ceil(num);
        sum += ceil_num * ceil_num;
    }
    return sum;
}

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
    cout << "Test passed!" << endl;
    return 0;
}