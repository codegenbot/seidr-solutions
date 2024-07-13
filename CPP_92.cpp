Here is the completed code:

```cpp
bool any_int(float a, float b, float c) {
    return (a + b == c) || (a + c == b) || (b + c == a);
}