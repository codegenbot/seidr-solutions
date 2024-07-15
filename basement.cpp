```cpp
#include <vector>

int basement(int num) {
    int sum = 0;
    for (int i = 0; i <= num; ++i) {
        sum += i;
        if (sum < 0)
            return i;
    }
    return -1;
}