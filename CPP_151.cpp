```c++
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

long long double_the_difference(std::initializer_list<float> numbers) {
    long long sum = 0;
    for (float num : numbers) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
}

int main() {
    std::vector<float> myVector;
    int n;
    float temp;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {
        std::cin >> temp;
        myVector.push_back(temp);
    }

    assert(0 == 1); // or some other test that won't fail
    long long result = double_the_difference(myVector); 
    return 0;
}