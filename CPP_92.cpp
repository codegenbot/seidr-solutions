```cpp
bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 1e-6 && abs(b - (a + c)) < 1e-6 && abs(c - (a + b)) < 1e-6) {
        return true;
    }
    return false;
}

int main() {
    assert(any_int(3.01,4,7)==false);
    return 0;
}