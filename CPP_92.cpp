#include <iostream>
using namespace std;

bool any_int(float a, float b, float c);

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
    assert(any_int(3.01, 4, 7) == false);
    // Add more assertions or code here as needed.
    return 0;
}