#include <vector> // Include the necessary header file

long long double_the_difference(std::vector<float> lst){ // Fix the function signature
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}

int main(){
    std::vector<float> lst = {1.0, 2.0, 3.0}; // Define lst vector
    long long odd_sum = 0; // Calculate the expected output value
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}