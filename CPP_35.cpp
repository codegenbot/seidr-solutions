```cpp
int main() {
    int l[] = {-5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::vector<int> v(l, l + sizeof(l)/sizeof(l[0]) / sizeof(l[0]));
    int maxVal = *std::max_element(v.begin(), v.end());
    for (int i : v) {
        if (i > maxVal)
            maxVal = i;
    }
    return std::abs(maxVal);
}