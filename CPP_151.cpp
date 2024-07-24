#include <cmath>
#include <vector>
#include <iostream>

long long double_the_difference(std::vector<float> lst){
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
    
    std::cout << "Enter numbers to calculate the sum of squares: ";
    
    while(std::cin >> num){
        lst.push_back(num);
    }

    float odd_sum = double_the_difference(lst);

    return 0;
}