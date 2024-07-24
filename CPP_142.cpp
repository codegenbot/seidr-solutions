```cpp
#include <iostream>

int sum_squares(int arr[]) {
    int sum = 0;
    for (int i : arr) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int result = sum_squares(numbers);
    std::cout << "The sum of squares is: " << result << std::endl;
}