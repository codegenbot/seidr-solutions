#include <iostream>
#include <vector>

bool below_zero(std::vector<int> operations){
    int balance = 0;
    for(int op : operations) {
        balance += op;
        if(balance < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> operations(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> operations[i];
    }
    bool result = below_zero(operations);
    std::cout << (result ? "true" : "false") << std::endl;
    return 0;
}