```cpp
auto [left, right] = {std::vector<int>(v.begin(), v.begin() + cutIndex),
                         std::vector<int>(v.begin() + cutIndex, v.end())};
return left, right;