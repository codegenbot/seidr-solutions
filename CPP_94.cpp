```cpp
#include <iostream>
#include <cassert>

int calculateScore(int values[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if(values[i] > 100) {
            sum += 1;
        }
    }
    return sum;
}

int main() {
    int myValues[] = {127, 97, 8192};
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    for (int i = 0; i < n; i++) {
        std::cout << "Value at index " << i << ": ";
        std::cout << myValues[i] << std::endl;
    }
    int score = calculateScore(myValues, n);
    std::cout << "The score is: " << score << std::endl;
    assert(calculateScore(myValues, n) == 3); 
    return 0;
}