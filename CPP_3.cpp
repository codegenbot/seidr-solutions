#include <iostream>
#include <vector>

int main() {
    std::vector<int> operations;
    int operation;

    // Input from user
    std::cout << "Enter number of operations: ";
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Operation " << i+1 << ": ";
        std::cin >> operation;
        operations.push_back(operation);
    }

    if (below_zero(operations)) {
        std::cout << "Balance went below zero.\n";
    } else {
        std::cout << "Balance never went below zero.\n";
    }
    
    return 0;
}

bool below_zero(std::vector<int> operations){
    int balance = 0;
    for (int operation : operations) {
        balance += operation;
        if (balance < 0) return true;
    }
    return false;
}