```cpp
#include <vector>
#include <algorithm>

int can_arrange(std::vector<int> vect) {
    for (int i = 1; i < vect.size(); i++) {
        if (vect[i] <= vect[i - 1]) {
            int first = vect[i];
            int second = vect[i - 1];
            std::swap(first, second);
            return i;
        }
    }
    return -1;
}

int main() {
    assert(can_arrange({}) == -1);
    // your code here
}