#include <vector>  // Include the vector header

long long double_the_difference(std::vector<float> lst){ // Change vector<float> to std::vector<float>
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0}; // Initialize 'lst' with test values
    long long odd_sum = double_the_difference(lst); // Calculate the result
    assert (odd_sum == 15); // Change 'odd_sum' to the expected result

    return 0;
}