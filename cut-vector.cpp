```cpp
return {{std::vector<int>(v.begin(), v.begin() + leftCut)}, {std::vector<int>(v.begin() + leftCut, v.end())}};