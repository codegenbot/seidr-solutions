#include <vector>
#include <cassert>

bool below_zero(std::vector<int> operations) {
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
    // Test the function
    std::vector<int> operations = {1, -1, 2, -2, 3, -3};
    assert(below_zero(operations) == true);

    return 0;
}