#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> l;
    int max_val = *std::max_element(l.begin(), l.end());
    return max_val;
}