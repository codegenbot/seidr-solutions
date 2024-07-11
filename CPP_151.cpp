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
    long long odd_sum = 0;

    // Read input from user
    while (std::cin >> num) {
        lst.push_back(num);
    }

    // Calculate the difference and print it
    long long result = double_the_difference(lst);

    std::cout << "The double difference is: " << result << std::endl;
    
    return 0;
}