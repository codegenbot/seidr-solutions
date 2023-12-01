#include <vector>

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + remaining;
    int left = need - remaining;

    if (left <= 0) {
        return {totalEaten, 0};
    } else {
        return {totalEaten, left};
    }
}