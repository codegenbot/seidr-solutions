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
    const std::vector<int> vec = {1, 8, 4, 10};
    assert(!below_threshold(vec, 10));
}