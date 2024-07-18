#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(const vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(not(below_threshold(vector<int>{1, 8, 4, 10}, 10)));
    
    return 0;
}