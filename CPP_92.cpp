#include <cassert>

bool any_int(float a, float b, float c) {
    return (int(a) + int(b)) == int(c) || (int(a) + int(c)) == int(b) || (int(b) + int(c)) == int(a);
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    // Add more test cases as needed
    return 0;
}