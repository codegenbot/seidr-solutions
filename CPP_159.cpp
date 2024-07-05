#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if (carrotsLeft < 0) {
        totalEaten += carrotsLeft; // adjust for negative carrotsLeft
        carrotsLeft = 0;
    }
    return {totalEaten, carrotsLeft};
}

int main() {
    assert(eat(4, 5, 1) == vector<int>({5, 0}));
    cout << "All tests passed!" << endl;
    return 0;
}