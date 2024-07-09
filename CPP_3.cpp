#include <vector>

bool below_zero(std::vector<int> operations) {
    int balance = 0;
    for(int operation; operation = operations.begin(); operation++){
        balance += operation;
        if(balance < 0) return true;
    }
    return false;
}