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
    std::vector<int> values;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        values.push_back(val);
    }

    if (below_zero(values)) {
        std::cout << "There are negative balances in the operations." << std::endl;
    } else {
        std::cout << "No negative balances in the operations." << std::endl;
    }

    return 0;
}