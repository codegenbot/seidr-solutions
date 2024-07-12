```cpp
#include <iostream>

int calculateScore(int values[], int n) {
    int score = 0;
    for (int i = 0; i < n; i++) {
        if (values[i] > 127) {
            score += values[i];
        } else {
            score -= values[i];
        }
    }
    return score;
}

int main() {
    int myValues[] = {127, 97, 8192};
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    for (int i = 0; i < n; i++) {
        std::cout << "Value at index " << i << ": " << myValues[i] << std::endl;
    }
    int score = calculateScore(myValues, n);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}