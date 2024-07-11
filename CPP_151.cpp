#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for(float x : lst) {
        if(x > 0 && (int)x == x) { 
            if((int)x % 2 != 0) { 
                sum += pow((int)x, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;

    int n;
    float num;

    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << (i + 1) << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    long long result = double_the_difference(lst);

    std::cout << "The sum of squares of odd positive integers in the list is: " << result << std::endl;

    return 0;
}