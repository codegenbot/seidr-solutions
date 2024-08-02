#include <vector>
#include <cmath>

using namespace std;

int sum_squares(const vector<int>& lst) {
    int sum = 0;
    for (int num : lst) {
        sum += pow(num, 2);
    }
    return sum;
}