#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    // Add implementation for checking if vectors a and b are the same
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    // Add implementation for comparing game and guess vectors
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
    return 0;
}