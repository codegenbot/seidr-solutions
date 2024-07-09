#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (auto num : lst) {
        if (num > 0 && int(num) == num) {
            sum += pow(int(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; // Define the variable
    float odd_sum = double_the_difference(lst); // Declare and initialize the variable
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}