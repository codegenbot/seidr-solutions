#include <iostream>
#include <vector>
#include <assert.h>

bool below_threshold(vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(not(below_threshold({1, 8, 4, 10}, 10)));
    bool result = below_threshold({1, 2, 3, 4}, 5);
    std::cout << "Is the vector below threshold? " << result << std::endl;
    return 0;
}