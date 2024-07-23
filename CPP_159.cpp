```cpp
#include <vector>

std::vector<int> eat(int a, int b, int c) {
    int total = a + c;
    int left = total - 1000;
    if (left < 0) {
        left = 0;
    }
    if (left > b) {
        left = b;
    }
    return {a + c, left};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // define the function
}