#include <vector>

vector<int> eat(int number, int need, int remaining);

bool operator==(const vector<int>& a, const vector<int>& b);

int main() {
    assert(eat(4, 5, 1) == vector<int>{5, 0});
    return 0;
}

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    return {totalEaten, carrotsLeft};
}

bool operator==(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size() && equal(a.begin(), a.end(), b.begin()));
}