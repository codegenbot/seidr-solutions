```cpp
#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;

}

int main() {
    std::cout << (below_threshold({1, 8, 4, 10}, 10) ? "False\n" : "True\n");
}