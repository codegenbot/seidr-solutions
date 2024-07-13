#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    // Get the input list from the user
    std::cout << "Enter a list of numbers (space-separated): ";
    std::string str;
    std::cin >> str;
    std::istringstream iss(str);
    float num;
    while (iss >> num) {
        lst.push_back(num);
    }

    long long odd_sum = double_the_difference(lst);

    return 0;
}