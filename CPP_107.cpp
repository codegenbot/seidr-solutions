```cpp
#include <vector>
#include <algorithm>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            result.push_back(0);
        else
            result.push_back(1);
    }
    return result;
}

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(even_odd_palindrome(1) == {0, 1});
}