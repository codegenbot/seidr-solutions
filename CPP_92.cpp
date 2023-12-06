```
bool any_int(float a, float b, float c) {
    if (a == lroundf(b + c) || b == lroundf(a + c) || c == lroundf(a + b)) {
        return true;
    } else {
        return false;
    }
}
```
This code uses the `lroundf` function from the `<cmath>` header file to round the floating-point numbers to the nearest integer. This ensures that the comparison is made with integers, which avoids any issues related to floating-point precision.