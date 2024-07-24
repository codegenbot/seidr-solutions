#include <vector>
#include <cmath>
#include <iostream>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    
    while(std::cin >> input) {
        lst.push_back(input);
    }

    long long result = double_the_difference(lst); 
    std::cout << "The sum of squares of odd integers is: " << result << std::endl;

    return 0;
}