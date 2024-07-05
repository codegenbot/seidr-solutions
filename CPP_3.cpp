#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

bool below_zero(vector<int> operations) {
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
    // Test case
    assert(below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);
    cout << "All test cases pass";
    return 0;
}