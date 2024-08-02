#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst = {1.0f, 2.5f, 3.0f, 4.25f};
    float odd_sum = 0.0;
    long long result = double_the_difference(lst);
    assert(result == odd_sum); 
    return 0;
}

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // check if number is positive and integer
            if (fmod(num, 1.0) != 0.0) { // check if number is odd
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}