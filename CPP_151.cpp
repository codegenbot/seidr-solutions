#include <vector>
#include <algorithm>
#include <iostream>

std::vector<double> double_the_difference() {
    std::vector<int> input_vector;
    int sum_even = 0, sum_odd = 0;

    while (true) {
        int num;
        std::cout << "Enter a number (-1 to finish): ";
        std::cin >> num;

        if (num == -1)
            break;

        if (num % 2 == 0)
            sum_even += num;
        else
            sum_odd += num;

        input_vector.push_back(num);
    }

    return {(double)sum_even, (double)sum_odd};
}

int main() {
    std::vector<double> result = double_the_difference();
    std::cout << "Double the difference: " << (result[0] - result[1]) * 2.0 << std::endl;
    return 0;
}