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
    std::vector<int> operations = {1, -2, 2, -2, 5, -5, 4, -4};
    bool result = below_zero(operations);
    return 0;
}