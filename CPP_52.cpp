#include <vector>
#include <cassert>

bool below_threshold(const std::vector<int>& l, int t) {
    for(int num : l) {
        if(num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(!below_threshold(std::vector<int>{1, 8, 4, 10}, 10));
}