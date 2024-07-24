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
    // Test the below_zero function
    std::vector<int> test_operations = {1, -2, 3, -4, 5};
    assert(below_zero(test_operations) == true);

    return 0;
}