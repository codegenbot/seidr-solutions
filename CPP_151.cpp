```cpp
#include <vector>
#include <cmath>
#include <initializer_list>
#include <iostream>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int start() {
    std::vector<float> myVector;
    int n;
    float temp;

    // Read the number of elements
    std::cin >> n;

    // Read each element and add to vector
    for(int i = 0; i < n; ++i) {
        std::cin >> temp;
        myVector.push_back(temp);
    }

    long long odd_sum = 0;
    for (float num : myVector) {
        if (floor(num) != floor(2.0 * num / 1.0)) {
            odd_sum += pow(num, 2);
        }
    }

    float result = double_the_difference(myVector);

    assert(result == odd_sum);

    return 0;
}