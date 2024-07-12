```cpp
#include <iostream>

bool will_it_fly(std::vector<std::vector<int>> q, int w) {
    // your function implementation here
    if(w >= (q[0][1] - q[0][0]) && w >= (q[1][1] - q[1][0])) {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::vector<std::vector<int>> q = {{1, 2}, {3, 4}};
    int w = 6;
    if (!will_it_fly(q, w)) {
        std::cout << "Will not fly.\n";
    } else {
        std::cout << "Will fly.\n";
    }
    return 0;
}