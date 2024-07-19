```cpp
#include <cassert>
#include <vector>

int next_smallest(std::vector<int> arr) {
    int smallest = INT_MAX;
    for (int i : arr) {
        if (i > smallest) return i;
        if (i < smallest) smallest = i;
    }
    return -1; // or handle this case as per your requirement
}