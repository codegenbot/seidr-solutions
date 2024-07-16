#include <vector>
#include <cassert>
#include <cmath> //Include cmath header for pow function

double double_the_difference(std::vector<float> lst) {
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += std::pow(num, 2); //Use std::pow for pow function
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.0, 4.0, 5.5};
    double odd_sum = 7.0; // Calculate the expected value of odd_sum
    assert(double_the_difference(lst) == odd_sum); // Compare the function result with odd_sum

    return 0;
}