#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double double_the_difference(vector<double> lst) {
    double sum = 0;
    for (double num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 == 1) {
            sum += pow(num - 2*double(num), 2);
        }
    }
    return sum;
}

int main() {
    vector<double> lst = {1.0, 2.0, 3.0, 4.0};
    double odd_sum = double_the_difference(lst);
    assert(odd_sum == 4);
    return 0;
}