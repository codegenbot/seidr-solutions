#include <iostream>
#include <vector>

bool below_zero(std::vector<int> operations) {
    int balance = 0;
    for(int i=0; i<operations.size(); i++){
        balance += operations[i];
        if(balance < 0) return true;
    }
    return false;
}

int main() {
    assert(below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);
    std::vector<int> input;
    int numOperations;
    std::cout << "Enter the number of operations: ";
    std::cin >> numOperations;
    for(int i=0; i<numOperations; i++){
        int operation;
        std::cout << "Enter operation " << (i+1) << ": ";
        std::cin >> operation;
        input.push_back(operation);
    }
    if(below_zero(input)){
        std::cout << "At some point, your balance was below zero.\n";
    } else{
        std::cout << "Your balance never went below zero.\n";
    }
    return 0;
}