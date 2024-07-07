#include <vector>
#include <cassert>

int solutions(std::vector<int> arr) {
    int count = 0;
    for (int i : arr) {
        if (i % 3 == 0 || i % 13 == 0 || i % 2 == 0)
            count++;
    }
    return count;