```cpp
#include <iostream>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;

}

int main() {
    std::vector<int> numbers = {1, 8, 4, 10};
    std::cout << (below_threshold(numbers, 10) ? "True\n" : "False\n");
}