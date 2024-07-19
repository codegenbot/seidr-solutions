```cpp
#include <vector>
#include <algorithm>

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    int j = 0;
    for (float val : l) {
        if (val % 2.0 == 0.0) {
            result[j++] = val; // even numbers first
        } else {
            result[j++] = val;
        }
    }
    std::sort(result.begin(), result.end()); // sort all numbers
    return result;
}