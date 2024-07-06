#include <iostream>
#include <vector>

bool below_zero(std::vector<int> operations) {
    int balance = 0;
    for (int i = 0; i < operations.size(); ++i) {
        balance += operations[i];
        if (balance < 0) return true;
    }
    return false;

}

int main() {
    std::vector<int> operations;
    
    int num_operations;
    std::cout << "Enter the number of operations: ";
    std::cin >> num_operations;

    for (int i = 0; i < num_operations; ++i) {
        int operation;
        std::cout << "Enter operation " << i + 1 << ": ";
        std::cin >> operation;
        operations.push_back(operation); 
    }

    bool result = below_zero(operations);

    if (result) {
        std::cout << "The total balance is below zero.\n";
    } else {
        std::cout << "The total balance is not below zero.\n";
    }

    return 0;