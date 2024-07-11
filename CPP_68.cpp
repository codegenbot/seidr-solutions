#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> std::vector<int>::pluck(std::vector<int> v) {
    return v;
}

bool std::vector<int>::issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(std::vector<int>::issame(std::vector<int>::pluck({7, 9, 7, 1}), std::vector<int>()));
}