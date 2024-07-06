```cpp
#include <iostream>
#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            sum += pow(x, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    int numElements;
    std::cout << "Enter the number of elements: ";
    std::cin >> numElements;

    for(int i = 0; i < numElements; i++) {
        float val;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> val;
        lst.push_back(val);
    }

    long long odd_sum = 0;

    // Call the function and print the result
    std::cout << "The difference is: " << double_the_difference(lst) - odd_sum << std::endl;

    return 0;
}