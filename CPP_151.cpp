#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && std::floor(x) == x) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    while(std::cin >> input)
        lst.push_back(input);

    long long odd_sum = double_the_difference(lst); 
    std::cout << "The sum of squares is: " << odd_sum << std::endl;

    return 0;
}