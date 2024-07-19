#include <vector>
#include <cmath>
using namespace std;

long double double_the_difference(vector<double> lst) {
    long double sum = 0;
    for (double num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<double> lst = {1.0, 2.0, 3.0};
    long double odd_sum = double_the_difference(lst);
    std::vector<double> lst = {1.0, 2.0, 3.0};
    long double result = double_the_difference(lst);
    assert(result == odd_sum);
}