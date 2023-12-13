```cpp
#include <iostream>
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

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> output = eat(4, 5, 1);
    std::cout << output[0] << " " << output[1] << std::endl;
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}
```