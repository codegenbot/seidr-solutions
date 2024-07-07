```cpp
int closest_integer(double num) {
    return (num >= 0) ? static_cast<int>(num) : -static_cast<int>(-num);
}