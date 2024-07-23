#include <algorithm>
#include <vector>

int max_val(std::vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}