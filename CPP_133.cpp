```
#include <cmath>
#include <vector>

int sum_squares(std::vector<float> lst) {
    int result = 0;
    for(float num : lst) {
        int ceil_num = std::ceil(num);
        result += pow(ceil_num, 2);
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1.5f, 2.2f, 3.8f};
    int sum = sum_squares(numbers);
    std::cout << "Sum of squares: " << sum << std::endl;
    return 0;
}