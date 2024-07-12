#include <iostream>
#include <vector>

int calculateScore(std::vector<int> values) {
    int sum = 0;
    for (int i = 0; i < values.size(); i++) {
        sum += values[i];
    }
    return sum;
}

int main() {
    std::vector<int> myValues = {127, 97, 8192};
    std::cout << "The score is: " << calculateScore(myValues) << std::endl;
    return 0;
}