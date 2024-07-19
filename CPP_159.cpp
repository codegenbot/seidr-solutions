#include <vector>
#include <iostream>

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
    std::cout << "Enter number of carrots, remaining carrots, and needed carrots: ";
    std::cin >> number >> remaining >> need;

    std::vector<int> expectedResult = {number + remaining, std::max(0, remaining - (need - number))};
    std::vector<int> result = eat(number, remaining, need);

    if (isSame(expectedResult, result)) {
        std::cout << "Output matches the expected result.";
    } else {
        std::cout << "Output does not match the expected result.";
    }

    return 0;
}