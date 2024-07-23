#include <vector>
#include <cmath>
#include <initializer_list>
#include <iostream>

long long double_the_difference(const std::vector<float>& numbers) {
    long long sum = 0;
    for (float num : numbers) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    int n;
    float temp;

    // Read the number of elements
    std::cin >> n;

    // Read each element and add to vector
    std::vector<float> myVector;
    for(int i = 0; i < n; ++i) {
        std::cin >> temp;
        myVector.push_back(temp);
    }

    long long result = double_the_difference(myVector); 
    return 0;
}