```
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    std::cout << "Enter numbers (enter 'stop' to finish): ";
    while (true) {
        std::cin >> num;
        if (std::to_string(num) == "stop") break;
        lst.push_back(num);
    }
    long long result = double_the_difference(lst);
    std::cout << "Double the difference: " << result << std::endl;
    return 0;
}