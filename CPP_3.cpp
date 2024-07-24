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
    // Test the function below_zero with sample input
    std::vector<int> operations = {1, -2, 3, -4, 5};
    assert(below_zero(operations) == true);

    return 0;
}