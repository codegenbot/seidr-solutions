#include <iostream>

int calculateScore(int values[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += values[i];
    }
    return sum;
}

int main() {
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    int myValues[] = {127, 97, 8192};
    std::cout << "The score is: " << calculateScore(myValues, n) << std::endl;
    return 0;
}