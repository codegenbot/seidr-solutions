```cpp
#include <iostream>
#include <vector>

bool will_it_fly(const std::vector<std::vector<int>>& q, int w) {
    if (q[0].size() > w) {
        return false;
    }
    for (const auto& row : q) {
        if (row.size() != w) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<int>> q = {{1}};
    int w = 2;
    bool result = will_it_fly(q, w);
    std::cout << (result ? "The plane will fly." : "The plane won't fly.") << std::endl;
}