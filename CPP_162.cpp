```cpp
result.push_back(static_cast<char>((md[i] >> 4) & 0x0f));
result.push_back(static_cast<char>(md[i] & 0x0f));