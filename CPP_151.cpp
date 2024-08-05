#include <vector> // Include the vector header file
#include <cassert> // Include the assert header file

long long double_the_difference(std::vector<float> lst){ // Add "std::" before "vector<float>"
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && ((int)num) % 2 != 0) { // Add "std::" before "fmod"
            sum += (long long)num * num;
        }
    }
    return sum;
}

int main(){
    std::vector<float> lst = {1.5, 2.5, 3.5, 4.5, 5.5}; 
    long long odd_sum = double_the_difference(lst); // Calculate the expected result
    assert (odd_sum == 35); // Add the variable "odd_sum" for comparison
    return 0;
}