```cpp
#include <vector>
#include <string>
#include <assert.h>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> result;
    if (num == 0) {
        return {1, 0};
    }
    std::string str = std::to_string(std::abs(num));
    for (char c : str) {
        if ((c - '0') % 2 == 0)
            result.push_back(1);
        else
            result.push_back(0);
    }
    return {result.size() / 2, result.size() - result.size() / 2};
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
}