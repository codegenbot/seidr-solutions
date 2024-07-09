```
#include <cassert>

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if (ai == bi + ci || ai == bi - ci || ai == ci + bi || ai == ci - bi)
        return true;
    else
        return false;
}

int main() {
    assert(any_int(3.01f, 4.0f, 7.0f) == false);
    float x = 1.5f;
    float y = 2.5f;
    float z = 3.5f;
    if (any_int(x, y, z)) {
        std::cout << "The sum of two integers is equal to the third integer." << std::endl;
    } else {
        std::cout << "The sum of two integers is not equal to the third integer." << std::endl;
    }
}