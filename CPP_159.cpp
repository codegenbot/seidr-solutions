#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + need;
    int carrotsLeft = remaining - need;

    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }

    return {totalEatenCarrots, carrotsLeft};
}