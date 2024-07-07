```cpp
#include <vector>
#include <algorithm>

int main() {
    vector<float> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    vector<float>::iterator it = max_element(l.begin(), l.end());
    return abs(*it);
}