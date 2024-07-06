```cpp
bool any_int(float a, float b, float c) {
    if (a == static_cast<int>(a) && 
        b == static_cast<int>(b) && 
        c == static_cast<int>(c)) {
        return (a == b + c || a == c + b || b == c + a);
    }
    return false;
}

int main() {
    assert(any_int(3.01, 4, 7) == false);  
    return 0;
}