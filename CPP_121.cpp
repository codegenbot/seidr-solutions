#include <vector>
#include <cassert>

int solutions(std::vector<int> arr) {
    int count = 0;
    for (int i : arr) {
        if (i % 3 == 0 || i % 13 == 0 || i % 2 == 0)
            count++;
    }
    return count;
}

int main() {
    std::vector<int> arr = {3, 13, 2, 9};
    int result = solutions(arr);
    assert(result == 3);
    return 0;
}