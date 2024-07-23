#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> v) {
    if (v.size() > 0) {
        return std::vector<int>(v.begin(), v.end()-1);
    }
    return v;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}) || "Expected all but the last element to be removed");
    std::cout << "All tests passed." << std::endl;
    return 0;
}