#include <algorithm>
#include <vector>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sort_array(std::vector<int> array) {
    std::vector<int> sortedArray(array);

    std::sort(sortedArray.begin(), sortedArray.end());

    return sortedArray;
}

int main() {
    assert(sort_array({21, 14, 23, 11}) == std::vector<int>({11, 14, 21, 23}));
    return 0;
}