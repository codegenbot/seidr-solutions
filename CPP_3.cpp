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
    // Code for processing the input and returning output goes here
    return 0;
}