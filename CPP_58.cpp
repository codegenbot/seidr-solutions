#include <iostream>
#include <vector>
#include <cassert>

int main() {
    assert(std::vector<int>{4, 3, 2, 8} == std::vector<int>{4, 3, 2, 8});
}