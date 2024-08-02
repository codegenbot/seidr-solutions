#include <vector>

bool below_zero(const vector<int>& operations) {
    int balance = 0;
    for (const auto& op : operations) {
        balance += op;
        if (balance < 0) {
            return true;
        }
    }
    return false;
}