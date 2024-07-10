#include <algorithm>
#include <cmath>

int myFunction(std::vector<int> l) {
    return std::abs(*std::max_element(l.begin(), l.end()));
}