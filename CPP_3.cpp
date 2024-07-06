```
#include <iostream>
#include <vector>

bool below_zero(std::vector<std::string> operations) {
    int balance = 0;
    for (int i = 0; i < operations.size(); ++i) {
        int operation = stoi(operations[i]);
        balance += operation;
        if (balance < 0) return true;
    }
    return false;

}

bool below_zero(std::vector<std::string> operations) {
    int balance = 0;
    for (int i = 0; i < operations.size(); ++i) {
        int operation = stoi(operations[i]);
        balance += operation;
        if (balance < 0) return true;
    }
    return false;

}