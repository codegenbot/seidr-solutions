```cpp
return {std::vector<int>(v.begin(), v.begin() + cutIndex), std::vector<int>(v.begin() + cutIndex, v.end())};