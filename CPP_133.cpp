#include <vector>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for (float num : lst) {
        sum += ceil(num) * ceil(num);
    }
    return sum;
}

// Call the function with float type explicitly specified for each element
sum_squares({-1.0f, 1.0f, 0.0f});