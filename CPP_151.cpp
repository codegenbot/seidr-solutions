```
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

int main() {
    int n;
    std::vector<float> lst;

    // Read the number of elements
    std::cin >> n;

    // Read each element and add to vector
    for(int i = 0; i < n; ++i) {
        float temp;
        std::cin >> temp;
        lst.push_back(temp);
    }

    long long result = double_the_difference(lst);

    return 0;
}