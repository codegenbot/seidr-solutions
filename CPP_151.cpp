#include <vector>
#include <cmath>
#include <iostream>

long long double_the_difference(std::vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && int(num + 0.5) == num) { 
            sum += pow(int(num + 0.5), 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<double> lst;
    double input;

    // Ask the user for input
    while (true) {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> input;

        if (input == -1.0) break; 

        lst.push_back(input);
    }

    long long odd_sum = double_the_difference(lst);
    return 0;
}