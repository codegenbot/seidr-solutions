```cpp
return vector<int>(transform(vec.begin(), vec.end(), [](auto p){ return p.second; }), transform(vec.begin(), vec.end(), [](auto p){ return p.second; }));