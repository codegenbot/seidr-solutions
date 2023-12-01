#include<vector>

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int left = remaining - need;

    if (left < 0) {
        left = 0;
    }

    vector<int> result = {totalEaten, left};
    return result;
}