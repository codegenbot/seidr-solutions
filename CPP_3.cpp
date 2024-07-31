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
    std::vector<int> operations = {1, -3, 5, -2, 1};
    if (below_zero(operations)) {
        std::cout << "Balance goes below 0\n";
    } else {
        std::cout << "Balance stays above or at 0\n";
    }
    
    return 0;
}