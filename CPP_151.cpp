#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> my_lst = {1.5f, 3.25f, -4.75f}; // declare and initialize lst
    int odd_sum = double_the_difference(my_lst); // define and use odd_sum
    return 0;
}