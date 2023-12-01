#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double double_the_difference(vector<double> lst) {
    double sum = 0;
    for (double num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 == 1) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<double> lst = {1.5, 2.0, 3.3, 4.0, 5.5};
    double odd_sum = 1.0 * 1.0 + 3.0 * 3.0 + 5.0 * 5.0;
    assert(double_the_difference(lst) == odd_sum);

    return 0;
}