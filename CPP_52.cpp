#include <vector>

int below_threshold(vector<int> l, int t) {
    for (int i : l) {
        if (i >= t) {
            return 0; // Return 0 if there is a number in the vector that is greater than or equal to the threshold
        }
    }
    return 1; // Return 1 if all numbers in the vector are less than the threshold
}