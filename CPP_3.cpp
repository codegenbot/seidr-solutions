#include <vector>
#include <iostream>

bool below_zero(std::vector<int> operations){
    int balance = 0;
    for(int op : operations){
        balance += op;
        if(balance < 0) return true;
    }
    return false;

}

int main() {
    std::cout << std::boolalpha << below_zero({1, -2, 2, -2, 5, -5, 4, -4}) << std::endl;
    return 0;
}