#include <vector>

bool below_zero(std::vector<int> operations) {
    int balance = 0;
    for (std::vector<int>::iterator operation = operations.begin(); operation != operations.end(); ++operation){
        balance += *operation;
        if(balance < 0) return true;
    }
    return false;
}