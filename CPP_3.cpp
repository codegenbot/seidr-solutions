#include <vector>
using namespace std;

bool below_zero(vector<int> operations) {
    int balance = 0;
    for (int i = 0; i < operations.size(); i++) {
        balance += operations[i];
        if (balance < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    below_zero({1, -2, 2, -2, 5, -5, 4, -4});
    return 0;
}