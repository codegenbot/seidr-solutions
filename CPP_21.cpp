#include <vector>
#include <cassert>

bool is_same(std::vector<float> a, std::vector<float> b){
    return false;
}

int main() {
    assert(is_same({12.0, 11.0, 15.0, 13.0, 14.0}, {0.25, 0.0, 1.0, 0.5, 0.75}));
}