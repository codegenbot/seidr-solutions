```cpp
#include <cmath>
#include <vector>

int sum_squares(std::vector<float> lst){
    int result = 0;
    for(float num : lst) {
        int ceil_num = std::ceil(num);
        result += static_cast<int>(std::pow(ceil_num, 2));
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1.5f, 3.7f, 4.2f};
    int sum = sum_squares(numbers);
    std::cout << "Sum of squares: " << sum << std::endl;
    return 0;
}