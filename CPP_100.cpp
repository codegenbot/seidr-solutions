#include <vector>

bool issame(vector<int> a, vector<int> b) {
    // Compare the vectors a and b and return true
    // if they contain the same elements in the same order,
    // otherwise return false.
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> make_a_pile(vector<int> stones) {
    // Modify the vector stones so that all piles have exactly
    // the same number of stones. The number of stones in each
    // pile should be equal to the average number of stones across
    // all piles, rounded down to the nearest integer.
    int sum = 0;
    for (int i = 0; i < stones.size(); i++) {
        sum += stones[i];
    }
    int avg = sum / stones.size();
    for (int i = 0; i < stones.size(); i++) {
        stones[i] = avg;
    }
    return stones;
}