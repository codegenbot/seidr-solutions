#include <vector>
#include <cassert>

std::vector<int> eat(int x, int y, int z) {
    return {x+y, z};
}

bool isSameVector(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(isSameVector(eat(4, 5, 1), {9,0})); 
    return 0;
}