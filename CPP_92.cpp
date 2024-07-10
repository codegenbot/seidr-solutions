#include <iostream>
#include <assert.h>

bool any_int(float a, float b, float c) {
    if ((int)a + (int)b == (int)c || (int)a - (int)b == (int)c ||
        (int)b - (int)a == (int)c || (int)a + (int)b == (int)c)
        return true;
    else
        return false;
}

int main() {
    assert(any_int(3.01f, 4.0f, 7.0f) == false);
    std::cout << "Code runs correctly." << std::endl;
    return 0;
}