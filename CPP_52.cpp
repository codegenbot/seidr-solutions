#include <vector>
#include <cassert>

auto below_threshold = [](std::initializer_list<int> l, int t) -> bool {
    for(int num : l){
        if(num >= t){
            return false;
        }
    }
    return true;
};

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
}