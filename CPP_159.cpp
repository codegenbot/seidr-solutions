```cpp
#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    std::vector<int> result;
    int totalEaten = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    result.push_back(totalEaten);
    result.push_back(left);
    return result;
}

int main() {
    assert(eat(4, 5, 1) == std::vector<int>{5, 0});
    return 0;
}
```