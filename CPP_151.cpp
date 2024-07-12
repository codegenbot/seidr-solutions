#include <vector>
#include <cmath>

int double_the_difference(float numbers[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (std::floor(numbers[i]) == std::ceil(numbers[i])) {
            sum += static_cast<int>(numbers[i]);
        }
    }
    return abs(sum - double(sum));
}

float odd_sum(float numbers[], int n) {
    float total = 0.0f;
    for (int i = 0; i < n; i++) {
        if (std::floor(numbers[i]) != std::ceil(numbers[i])) {
            total += numbers[i];
        }
    }
    return total;
}

int main() {
    float numbers[] = {1.0f, 2.0f, 3.0f};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int main_result = double_the_difference(numbers, n);
    assert(main_result == static_cast<int>(odd_sum(numbers, n))); 
    return 0;
}