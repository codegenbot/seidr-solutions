#include <vector>
#include <cassert>

int main() {
    std::vector<int> operations = {1, -2, 2, -2, 5, -5, 4, -4};
    int balance = 0;
    for (int i = 0; i < operations.size(); i++) {
        balance += operations[i];
        if (balance < 0) {
            return true;
        }
    }
    return false;
}