#include <iostream>
#include <vector>

int sum_squares(std::vector<float> lst){
    int total_sum = 0;
    for(float x : lst) {
        double ceil_value = std::ceil(x);
        total_sum += (ceil_value * ceil_value);
    }
    return total_sum;
}

int main() {
    std::vector<float> numbers;
    int num;
    std::cout << "Enter the number of elements: ";
    std::cin >> num;

    for(int i = 0; i < num; i++) {
        float x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        numbers.push_back(x);
    }

    int result = sum_squares(numbers);

    std::cout << "The total sum of squares is: " << result << std::endl;

    return 0;
}