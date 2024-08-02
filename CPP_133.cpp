#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

int sum_squares(const vector<int>& lst) {
    int sum = 0;
    for (int num : lst) {
        sum += pow(num, 2);
    }
    return sum;
}

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
    return 0;
}