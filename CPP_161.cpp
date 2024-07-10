```cpp
#include <cassert>
#include <string>

int solve(std::string colorCode) {
    int result = 0;
    for (char c : colorCode) {
        if (c == '#') {
            continue;
        }
        if (isdigit(c)) {
            result++;
        }
    }
    return result;
}

int testMain() {
    assert(solve("#ccc") == 3);
    return 0;
}