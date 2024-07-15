#include <vector>
#include <cassert>

auto below_threshold = [](const std::vector<int>& l, int t) -> bool {
    for(int num : l){
        if(num >= t){
            return false;
        }
    }
    return true;
};

int main() {
    std::vector<int> values = {1, 8, 4, 10};
    assert(!below_threshold(values, 10));
}