```
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int result = 0;
    for(float num : lst) {
        int ceil_num = std::ceil(num);
        result += std::pow(ceil_num, 2);
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1.5f, 2.7f, 3.8f};
    int total_sum_squares = sum_squares(numbers);
    std::cout << "The sum of squares is: " << total_sum_squares << std::endl;
}