#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst;
    long long odd_sum = 0;

    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    for(int i=0; i<size; i++) {
        float num;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    long long sum = double_the_difference(lst);

    if(sum > 0) {
        std::cout << "The absolute difference is: " << sum << std::endl;
    } else {
        std::cout << "No elements with positive integer values and odd were found." << std::endl;
    }

    return 0;
}

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (num % 2 != 0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}