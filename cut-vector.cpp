```cpp
int minDiff = INT_MAX;
int cutIndex = -1;

for (int i = 0; i < v.size() - 1; ++i) {
    int diff = std::abs(v[i] - v[i + 1]);
    if (diff < minDiff) {
        minDiff = diff;
        cutIndex = i;
    }
}

return {std::vector<int>(v.begin(), v.begin() + cutIndex + 1), 
        std::vector<int>(v.begin() + cutIndex + 1, v.end())};