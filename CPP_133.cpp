```cpp
#include <cmath>
#include <vector>

#ifndef MYCODE_H
#define MYCODE_H

int sum_squares(std::vector<float> lst);

#endif


int sum_squares(std::vector<float> lst){
    int result = 0;
    for(float num : lst) {
        int ceil_num = std::ceil(num);
        result += std::pow(ceil_num, 2);
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1.5f, 2.3f, 3.7f};
    int output = sum_squares(numbers);
    // Print the result
    printf("The sum of squares is: %d\n", output);
}