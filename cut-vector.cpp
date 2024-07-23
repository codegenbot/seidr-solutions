```cpp
int cutIndex = 0;
int minDiff = INT_MAX;

for(int i = 1; i < v.size(); i++) {
    int diff = abs(v[i] - v[i-1]);
    if(diff <= minDiff) {
        minDiff = diff;
        cutIndex = i;
    }
}

return {{std::vector<int>(v.begin(), v.begin() + cutIndex)}},
       {std::vector<int>(v.begin() + cutIndex, v.end())};