#include <vector>
#include <algorithm>
#include <initializer_list>

int max_value(std::vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}