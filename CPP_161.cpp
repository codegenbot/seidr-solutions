```cpp
#include <cassert>
#include <string>

int solve(const std::string& color) {
    int result = 0;
    for (char c : color) {
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