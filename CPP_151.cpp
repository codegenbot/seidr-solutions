#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> myVector; 
    float odd_sum = 0.0f;

    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    myVector.resize(size);

    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> myVector[i];
    }

    odd_sum = double_the_difference(myVector); 
    assert(double_the_difference(myVector) == odd_sum);
    return 0;
}