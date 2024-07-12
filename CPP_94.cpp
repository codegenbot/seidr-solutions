```cpp
#include <iostream>

int calculateScore(int values[]) {
    int sum = 0;
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        sum += values[i];
    }
    return sum;
}

int main() {
    int myValues[] = {127, 97, 8192};
    std::cout << "The score is: " << calculateScore(myValues) << std::endl;
    return 0;
}