```
bool any_int(float a, float b, float c) {
    if (a == round(b + c) || b == round(a + c) || c == round(a + b)) {
        return true;
    } else {
        return false;
    }
}
```