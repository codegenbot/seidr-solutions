#include <vector> // Include the necessary header file

long long double_the_difference(std::vector<float> lst){ // Change the function signature to use std::vector<float>
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main(){
    std::vector<float> lst = {1.0, 2.0, 3.0}; // Define the variable lst in the main function
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 1); // Assuming the expected output is 1
    return 0;
}