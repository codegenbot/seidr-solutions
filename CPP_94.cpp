```cpp
#include <iostream>
#include <cassert>
#include <string>

int calculateScore(int values[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += values[i];
    }
    return sum;
}

int main() {
    int myValues[] = {127, 97, 8192};
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    for (int i = 0; i < n; i++) {
        std::cout << std::fixed << std::setprecision(0) << "Value at index " << i << ": " << myValues[i] << std::endl;
    }
    std::string scoreStr = std::to_string(calculateScore(myValues, n));
    if (scoreStr.length() > 10)
        scoreStr = scoreStr.substr(0, 10);
    std::cout << "The score is: " << scoreStr << std::endl;

    assert(std::stoi(scoreStr) == 1216);

    return 0;
}