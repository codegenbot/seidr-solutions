```cpp
return {{std::vector<int>(v.begin(), v.begin() + cutIndex + 1))},
        {std::vector<int>(v.begin() + cutIndex + 1, v.end())}};