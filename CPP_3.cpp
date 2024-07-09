#include <iostream>
#include <vector>
#include <cassert>

bool below_zero(const std::vector<int>& operations) {
    int balance = 0;
    for (int op : operations) {
        balance += op;
        if (balance < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> operations;
    int input;
    while (std::cin >> input) {
        operations.push_back(input);
    }
    
    if (below_zero(operations)) {
        std::cout << "Below zero balance reached.\n";
    } else {
        std::cout << "Below zero balance not reached.\n";
    }

    return 0;
}