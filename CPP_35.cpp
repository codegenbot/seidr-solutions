#include <algorithm>
#include <vector>
#include <initializer_list>

int findMax(const std::vector<int>& l) {
    return *std::max_element(l.begin(), l.end());
}