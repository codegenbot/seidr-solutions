#include <vector>
#include <algorithm>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    return {totalEaten, carrotsLeft};
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}