```cpp
bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 0.01 && abs(b - (a + c)) < 0.01 && abs(c - (a + b)) < 0.01) {
        return true;
    }
    return false;
}

bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 0.0001 && abs(b - (a + c)) < 0.0001 && abs(c - (a + b)) < 0.0001) {
        return true;
    }
    return false;
}

int main() {
    bool result = any_int(3.01, 4, 7);
    assert(result == false);
}