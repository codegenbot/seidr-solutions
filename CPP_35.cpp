```
float max_element(const vector<float>& l) {
    float max = -INFINITY;
    for (auto& x : l) {
        if (x > max) {
            max = x;
        }
    }
    return max;
}
```