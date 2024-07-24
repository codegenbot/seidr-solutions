#include <iostream>
#include <vector>

int sum_squares(const std::vector<int>& arr) {
    int sum = 0;
    for (int i : arr) {
        sum += i * i;
    }
    return sum;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int result = sum_squares(arr);
    std::cout << "The sum of squares is: " << result << std::endl;
}