#include <vector>
#include <cmath>
#include <cassert>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num == floor(num) && num > 0 && ((int)num) % 2 != 0) {
            sum += (int)num * (int)num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0, 2.0, 3.5, 3.0, 4.0, 5.0}; 
    long long odd_sum = 35;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}