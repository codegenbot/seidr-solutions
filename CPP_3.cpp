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
    // Test the function below_zero
    assert(below_zero({1, -2, 3, -4, 5}) == true);
    assert(below_zero({1, 2, 3, 4, 5}) == false);

    return 0;
}