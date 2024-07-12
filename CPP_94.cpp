```cpp
#include <iostream>
#include <cassert>

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
    std::cout << "The score is: " << calculateScore(myValues, n) << std::endl;

    assert(calculateScore(myValues, n) == 1216);

    return 0;
}