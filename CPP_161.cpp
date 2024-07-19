```cpp
#include <string>

int solve(std::string str) {
    for (char &c : str) {
        if (c == 'c' || c == 'C') {
            c = (c >= 'a' && c <= 'z') ? 'C' : 'c';
        }
    }
    return 0;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}