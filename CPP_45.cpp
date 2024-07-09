```cpp
float triangle_area(float a, float h) {
    return (a * h) / 2.0f;
}
assert (std::abs(triangle_area(10, 8) - 40.0)<1e-4);