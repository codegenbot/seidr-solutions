#include <algorithm>
#include <vector>
#include <initializer_list>

int main() {
    std::vector<int> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int result = *std::max_element(l.begin(), l.end());
    return result;
}