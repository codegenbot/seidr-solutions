#include <iostream>
#include <vector>

std::vector<int> eat(int number, int remaining, int need) {
    int totalEaten = number + remaining;
    int carrotsLeft = std::max(0, remaining - (need - number));
    return {totalEaten, carrotsLeft};
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
} 

int main() {
    int number, remaining, need;
    std::cout << "Enter the number of carrots eaten: ";
    std::cin >> number;
    std::cout << "Enter the remaining carrots: ";
    std::cin >> remaining;
    std::cout << "Enter the carrots needed: ";
    std::cin >> need;

    std::vector<int> result = eat(number, remaining, need);
    std::vector<int> expectedResult = {number + remaining, std::max(0, remaining - (need - number))};

    if (isSame(result, expectedResult)) {
        std::cout << "Output matches the expected result." << std::endl;
    } else {
        std::cout << "Output does not match the expected result." << std::endl;
    }

    return 0;
}