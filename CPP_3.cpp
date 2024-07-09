#include <iostream>
#include <vector>
#include <cassert>

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
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int op;
        std::cin >> op;
        operations.push_back(op);
    }

    std::cout << (below_zero(operations) ? "true" : "false") << std::endl;
    return 0;
}