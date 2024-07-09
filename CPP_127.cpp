```cpp
#include <vector>
#include <string>

bool intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);

    if (start > end) return false;

    int length = end - start + 1;

    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            return false;
        }
    }

    return true;
}