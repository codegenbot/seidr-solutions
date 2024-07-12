```cpp
#include <iostream>
int calculateScore(int[], int); 

int main() {
    int myValues[] = {127, 97, 8192};
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    for (int i = 0; i < n; i++) {
        std::cout << "Value at index " << i << ": ";
        if(std::to_string(myValues[i]).size() > 10) 
            std::cout << std::to_string(myValues[i]) << std::endl;
        else
            std::cout << myValues[i] << std::endl;
    }
    std::cout << "The score is: " << calculateScore(myValues, n) << std::endl;
    return 0;
}

int calculateScore(int values[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (values[i] > 127)
            sum += values[i];
    }
    return sum;
}