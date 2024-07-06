```cpp
#include <cassert>

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    return ((a == ai + bi + ci) || (b == ai + bi + ci) || (c == ai + bi + ci));
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    bool result = any_int(2.0f, 1, -1);
    std::cout << (result ? "True" : "False");
}