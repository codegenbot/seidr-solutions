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
    std::vector<float> lst; // declare and initialize the vector
    long long odd_sum = double_the_difference(lst); // call the function and assign to variable
    assert(odd_sum == 0); // check if the condition is met
}