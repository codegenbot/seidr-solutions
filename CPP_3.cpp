#include <vector>
#include <cassert>

bool below_zero(std::vector<int> operations){
    int balance = 0;
    for(int operation : operations){
        balance += operation;
        if(balance < 0) return true;
    }
    assert(!below_zero({1, -2, 2, -2, 5, -5, 4, -4}));
    return false;
}