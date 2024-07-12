Here is the completed code:

```cpp
bool any_int(float a, float b, float c) {
    int ai = (int)a, bi = (int)b, ci = (int)c;
    return ai == bi + ci || ai == bi - ci || ai == ci - bi;
}