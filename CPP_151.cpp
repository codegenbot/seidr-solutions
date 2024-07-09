#include <iostream>
#include <cmath>

long long double_the_difference(float num) {
    long long sum = 0;
    if (num > 0 && floor(num) == num) { 
        if (fmod(num, 2.0) != 0.0) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    long long result = 0;
    for (int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        result += double_the_difference(num);
    }
    std::cout << "The total sum of squares is: " << result << std::endl;
    
}