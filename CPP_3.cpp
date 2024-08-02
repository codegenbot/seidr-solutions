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

int main() {
    vector<int> operations = {1, -2, 3, -4, 5};
    below_zero(operations);
    return 0;
}