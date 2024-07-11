#include <iostream>
#include <vector>

bool below_zero(std::vector<int> operations){
    int balance = 0;
    for(int i=0; i<operations.size(); i++){
        balance += operations[i];
        if(balance < 0) return true;
    }
    return false;
}

int main(){
    std::cout << (below_zero({1, -2, 2, -2, 5, -5, 4, -4}) ? "True" : "False") << std::endl;
    return 0;
}