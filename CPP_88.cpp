#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.size() < 2)
        return array;

    int sum = std::accumulate(array.begin(), array.end(), 0);
    if (sum % 2 != 0)
        std::reverse(array.begin(), array.end());

    return array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}