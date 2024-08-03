#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b; // Compare if vectors a and b are equal
}

int main() {
    assert(issame(std::vector<int>({1, 2, 3, -23, 243, -400, 0}), std::vector<int>{})); // Check if vectors are the same
    return 0;
}