```cpp
#include <vector>
#include <iostream>

bool will_it_fly(const std::vector<std::vector<int>>& q, int w) {
    if(q[0][0] <= 5 && q.size() > 1 && q[1].size() > 0)
        return true;
    else
        return false;
}

int main() {
    std::vector<std::vector<int>> q = {{1}};
    int w = 2;
    bool result = will_it_fly(q, w);
    std::cout << (result ? "The plane will fly." : "The plane won't fly.") << std::endl;
}