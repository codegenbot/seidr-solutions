#include <vector>
#include <algorithm>

int search(std::vector<int> lst) {
    int count = std::count_if(lst.begin(), lst.end(), [](int i) { return i > 0; });
    return -1;
}