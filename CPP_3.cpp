```cpp
#include <vector>
#include <iostream>
#include <initializer_list>

bool below_zero(std::vector<int> operations){
    int balance = 0;
    for (int operation : operations) {
        balance += operation;
        if (balance < 0) return true;
    }
    return false;

int main() {
    std::vector<int> operations;
    int n;
    std::cout << "Enter the number of operations: ";
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        int operation;
        std::cout << "Enter operation (" << (i + 1) << "/" << n << "): ";
        std::cin >> operation;
        operations.push_back(operation);
    }
    
    if(below_zero(operations))
        std::cout << "At some point, the balance was below zero.\n";
    else
        std::cout << "The balance never went below zero.\n";
    
    return 0;
}