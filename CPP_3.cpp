#include <iostream>
#include <vector>

bool below_zero(const std::vector<int>& operations) {
    int balance = 0;
    for (int op : operations) {
        balance += op;
        if (balance < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> operations;
    
    int num;
    while (std::cin >> num) {
        operations.push_back(num);
    }
    
    std::cout << (below_zero(operations) ? "True" : "False") << std::endl;
    
    return 0;
}