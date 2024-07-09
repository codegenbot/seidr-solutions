Here is the solution:

```cpp
#include <vector>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == n || i % 10 == 1 || (n > 1 && (n % 10 == 1))) {
            count++;
        }
    }
    return count;
}