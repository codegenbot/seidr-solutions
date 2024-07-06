```cpp
#include <vector>
#include <algorithm>

bool std::vector<int>::operator== (const std::vector<int>& other) const {
    if (size() != other.size()) {
        return false;
    }
    for (int i = 0; i < size(); ++i) {
        if (at(i) != other.at(i)) {
            return false;
        }
    }
    return true;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        result.push_back(n);
    }
    return result;
}

int main() {
    assert(get_odd_collatz(1) == std::vector<int>({1}));
    return 0;
}