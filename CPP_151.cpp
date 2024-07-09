#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    
    // Read the values from user
    std::cout << "Enter the values (enter 'q' to stop):" << std::endl;
    while(true) {
        std::cin >> input;
        if(input == 'q') break;
        lst.push_back(input);
    }
    
    // Call the function with provided input and store the output
    long long result = double_the_difference(lst);

    return 0;
}