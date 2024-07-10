#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(const std::vector<int>& l, int t) {
    for(int num : l){
        if(num >= t){
            return false;
        }
    }
    return true;
}

void test_below_threshold() {
    assert(!below_threshold({1, 8, 4, 10}, 10)); // Sample test case
}

int main() {
    test_below_threshold();
    return 0;
}