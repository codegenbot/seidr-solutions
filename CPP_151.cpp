#include <iostream>
#include <vector>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num == (int)num && num > 0 && ((int)num % 2 != 0)) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    std::cout << "Enter numbers (end input with a non-numeric character): ";
    while (std::cin >> input) {
        lst.push_back(input);
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    long long result = double_the_difference(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}