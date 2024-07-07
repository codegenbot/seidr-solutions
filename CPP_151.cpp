#include <cmath>
#include <vector>
#include <algorithm> 
#include <numeric>
#include <iostream>

double double_the_difference(std::vector<double> lst) {
    double odd_sum = 0;
    for(double y : lst) {
        if (y > 0.0 && std::fmod(y, 2.0) != 0.0) { 
            odd_sum += std::pow(y, 2);
        }
    }
    return odd_sum;
}

void calculateOddSums(std::vector<double> lst) {
    double total_sum = 0;
    for(double y : lst) {
        if (y > 0.0 && std::fmod(y, 2.0) != 0.0) { 
            total_sum += y;
        }
    }
    double average = total_sum / static_cast<double>(std::count_if(lst.begin(), lst.end(), [](double x){ return x > 0.0 && std::fmod(x, 2.0) != 0.0; }));
    std::cout << "Average of odd numbers: " << average << std::endl;
}

void calculateAndPrint() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<double> lst;
    for(int i = 0; i < n; i++) {
        double num;
        while(true) {
            std::cout << "Enter element " << i+1 << ": ";
            std::cin >> num;

            if (num > 0.0 && std::fmod(num,2.0) != 0.0) { 
                lst.push_back(num); 
                break; // Exit the loop once a valid number is entered.
            } else {
                std::cout << "Invalid input. Please enter a positive odd number." << std::endl;
            }
        }
    }

    double total_sum = 0;
    for(double y : lst) {
        if (y > 0.0 && std::fmod(y, 2.0) != 0.0) { 
            total_sum += y;
        }
    }
    double average = total_sum / static_cast<double>(std::count_if(lst.begin(), lst.end(), [](double x){ return x > 0.0 && std::fmod(x, 2.0) != 0.0; }));
    std::cout << "Average of odd numbers: " << average << std::endl;

    double the_difference = double_the_difference(lst);
    std::cout << "Total sum: " << the_difference << std::endl;
}

void main() {
    calculateAndPrint();
}