#include <vector>

bool below_zero(const vector<int>& operations) {
    int balance = 0;
    for (int op : operations) {
        balance += op;
        if (balance < 0) {
            return true;
        }
    }
    return false;
}

vector<int> operations{1, -3, 2, -5, 7};

bool result = below_zero(operations);