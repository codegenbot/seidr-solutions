#include <vector>
#include <cmath>

using namespace std;

double double_the_difference(vector<double> lst) {
    double sum = 0;
    for (double num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 == 1) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<double> lst = {1, 2, 3, 4, 5};
    double odd_sum = 1*1 + 3*3 + 5*5;
    assert(double_the_difference(lst) == odd_sum);

    return 0;
}