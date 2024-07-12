Here is the completed code:

```cpp
bool any_int(float a, float b, float c) {
    return (a == b + c || a == b - c || a == c + b || a == c - b) && 
           (int(a) == a) && (int(b) == b) && (int(c) == c);
}