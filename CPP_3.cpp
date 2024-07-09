#include <iostream>
#include <vector>

int below_zero(std::vector<int> operations){
    int balance = 0;
    for(int operation : operations){
        balance += operation;
        if(balance < 0) return 1;
    }
    return 0;
}

int main() {
    assert(below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == 1);
    return 0;
}