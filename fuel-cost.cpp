Here is the completed code:

#include <vector>
#include <iostream>

int calculateFuelCost(const std::vector<int>& input) {
    int total = 0;
    for (int num : input) {
        if (num < 1) {
            // handle error condition, return -1 or throw an exception
            // assuming it's okay to skip this input
            continue;
        }
        int result = (num / 3) - 2;
        total += result;
    }
    return total;
}

int main() {
    std::vector<int> input;
    int num;
    while (std::cin >> num && num > 0) {
        input.push_back(num);
    }
    std::cout << calculateFuelCost(input) << std::endl;
    return 0;
}