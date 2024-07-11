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
    std::vector<int> vec = {1, 8, 4, 10};
    std::cout << (below_threshold(vec, 10) ? "False\n" : "True\n");
}