#include <vector>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for (float num : lst) {
        sum += ceil(num) * ceil(num);
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5, 2.3, 3.7};
    int result = sum_squares(numbers);
    return 0;
}