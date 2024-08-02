#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x >= 0 && int(x) == x) {
            sum += pow(int(x), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    long long odd_sum = 0;

    std::cout << "Enter numbers (enter 'q' to quit):" << std::endl;
    
    while(true) {
        std::cin >> num;
        
        if(num == 'q') {
            break;
        }
        
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst);

    std::cout << "The sum of the squares of the positive integers is: " << odd_sum << std::endl;

    return 0;
}