#include <vector>

bool below_zero(std::vector<int> operations){
    int balance = 0;
    for(int operation : operations){
        balance += operation;
        assert(balance >= 0 || "balance should not be negative");
        if(balance < 0) return true;
    }
    return false;
}