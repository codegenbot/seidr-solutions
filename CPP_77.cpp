```cpp
#include <cassert>

bool isCube(int n) {
    int i = 1;
    while (i * i * i <= n) {
        if (i * i * i == n)
            return true;
        i++;
    }
    return false;
}

void originalFunction() {}

int main(){
    originalFunction();
    assert(isCube(1729) == false);
    return 0;
}