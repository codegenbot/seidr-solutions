#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(std::vector<float> lst) {
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 == 1) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;

    // Add elements to lst here
    lst.push_back(1.0);
    lst.push_back(3.0);
    lst.push_back(5.0);

    double odd_sum = 35.0;

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}