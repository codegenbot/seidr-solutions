```cpp
#include <iostream>
#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = total - 1000;
    if (left < 0) {
        left = 0;
    }
    if (left > remaining) {
        left = remaining;
    }
    return {number + need, total - (number + left)};
}

int main() {
    std::vector<int> output = eat(4, 5, 1);
    for(int i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}