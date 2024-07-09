#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> compare(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result(a.size(), 0);
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) result[i] = 0;
        else if (a[i] < b[i]) result[i] = -1;
        else result[i] = 1;
    }
    return result;
}

int main() {
    auto result = compare({1, 2, 3, 5}, {-1, 2, 3, 4});
    assert(result == std::vector<int>{2, 0, 0, 1});
    return 0;
}