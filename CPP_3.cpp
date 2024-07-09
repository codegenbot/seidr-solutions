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
    std::vector<int> input_ops;
    int num_ops;
    std::cin >> num_ops;

    for (int i = 0; i < num_ops; ++i) {
        int op;
        std::cin >> op;
        input_ops.push_back(op);
    }

    if (below_zero(input_ops)) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }

    return 0;
}