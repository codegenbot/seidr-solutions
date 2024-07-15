#include <iostream>
#include <vector>

bool below_zero(std::vector<int> operations){
    int balance = 0;
    for(int operation : operations){
        balance += operation;
        if(balance < 0) return true;
    }
    return false;
}

int main(){
    assert (below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);
    std::cout << "Code works fine." << std::endl;
    return 0;
}