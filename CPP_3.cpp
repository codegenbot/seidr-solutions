#include <iostream>
#include <vector>

bool below_zero(std::vector<int> operations){
    int balance = 0;
    for (int operation : operations) {
        balance += operation;
        if (balance < 0) return true;
    }
    return false;
}

int main(){
    std::vector<int> ops;
    int numOps;

    // Read the number of operations
    std::cout << "Enter the number of operations: ";
    std::cin >> numOps;

    // Read each operation
    for(int i = 0; i < numOps; ++i){
        int op;
        std::cout << "Enter operation #" << (i+1) << ": ";
        std::cin >> op;
        ops.push_back(op);
    }

    if(below_zero(ops))
        std::cout << "The balance went below zero at least once.\n";
    else
        std::cout << "The balance never went below zero.\n";

    return 0;
}