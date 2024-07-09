```c++
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        } else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    return {maxNeg, minPos};
}

int main() {
    // Your code goes here.
    return 0;
}