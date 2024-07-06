```cpp
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
    double num;

    while(std::cin >> num){
        if(num >= 0) {
            lst.push_back(num);
        } else {
            break;
        }
    }

    long long odd_sum = double_the_difference(lst);

    std::cout << "The sum of the squares of the input numbers is: " << odd_sum << "\n";

    return 0;
}