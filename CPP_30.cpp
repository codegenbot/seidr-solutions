```cpp
bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if ((a[i] != b[i])) {
            return false;
        }
    }
    return true;
}

float get_positive(const std::vector<float>& l) {
    float sum = 0.0f;
    for (const auto& x : l) {
        if (x > 0) {
            sum += x;
        }
    }
    return sum;
}