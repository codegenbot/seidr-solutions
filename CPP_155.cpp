```cpp
#include <iostream>
#include <vector>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> result;
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            result.push_back(1);
        else
            result.push_back(-1);
        num /= 10;
    }
    return result;
}

int main() {
    assert(issame(even_odd_count(0), {0}));
    return 0;
}