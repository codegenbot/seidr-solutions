#include <vector>
#include <iostream>

int main() {
    int balance = 0;
    std::vector<int> operations;
    
    // get input from the user and store in vector
    int operation;
    while (std::cin >> operation) {
        balance += operation;
        operations.push_back(operation);
        if (balance < 0) break;  // if balance becomes negative, stop reading input
    }
    
    bool result = false;
    for (int op : operations) {
        balance += op;
        if (balance < 0) {
            result = true;
            break;
        }
    }
    
    std::cout << (result ? "True" : "False") << std::endl;
    
    return 0;
}