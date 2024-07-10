#include <iostream>
#include <vector>
#include <cmath>

double sum_squares(std::vector<double> lst){
    double sum = 0;
    for (double num : lst) {
        double rounded_num = std::round(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}

int main() {
    std::vector<double> input;
    double num;
    while (std::cin >> num) {
        input.push_back(num);
    }
    
    double result = sum_squares(input);
    std::cout << result << std::endl;

    return 0;
}