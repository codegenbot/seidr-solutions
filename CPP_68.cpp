#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> pluck(std::vector<int> arr);

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}