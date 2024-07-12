```cpp
#include <iostream>
#include <string>

int calculateScore(int values[], int n) {
    int sum = 0;
    std::string scoreString = "";
    for (int i = 0; i < n; i++) {
        if (values[i] > 127)
            scoreString += std::to_string(values[i]) + " ";
    }
    return 0;
}

int main() {
    int myValues[] = {127, 97, 8192};
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    for (int i = 0; i < n; i++) {
        std::cout << "Value at index " << i << ": " << myValues[i] << std::endl;
    }
    std::cout << "The score is: " << calculateScore(myValues, n) << std::endl;
    return 0;
}