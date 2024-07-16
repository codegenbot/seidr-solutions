#include <vector>
#include <cassert> // Include the necessary header file

double double_the_difference(std::vector<float> lst){
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.0, 4.0, 5.5};
    double odd_sum = double_the_difference(lst);
    assert(odd_sum == double_the_difference(lst)); // Compare 'odd_sum' with the function result
    
    return 0;
}