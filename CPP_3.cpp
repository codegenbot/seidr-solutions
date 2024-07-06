#include <iostream>
#include <vector>

bool below_zero(const std::vector<int>& operations) {
    int balance = 0;
    for (int operation : operations) {
        balance += operation;
        if (balance < 0) return true;
    }
    return false;

}

int main() {
    std::vector<int> operations;
    
    // Read the number of operations from user
    int num_operations;
    std::cout << "Enter the number of operations: ";
    std::cin >> num_operations;

    // Read each operation from user and store it in the vector
    for (int i = 0; i < num_operations; ++i) {
        int operation;
        std::cout << "Enter operation " << i + 1 << ": ";
        std::cin >> operation;
        operations.push_back(operation); 
    }

    // Check if the total balance is below zero
    bool result = below_zero(operations);

    // Print the result
    if (result) {
        std::cout << "The total balance is below zero.\n";
    } else {
        std::cout << "The total balance is not below zero.\n";
    }

    return 0;
}