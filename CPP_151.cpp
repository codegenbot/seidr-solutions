```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (int(x) > 0 && int(x) % 2 != 0)
            sum += pow(int(x), 2);
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;

    // Read input from the user
    while (std::cin >> num) {
        lst.push_back(num);
    }

    long long result = double_the_difference(lst);

    // Print the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}