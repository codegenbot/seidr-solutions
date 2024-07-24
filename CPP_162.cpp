```cpp
for (int i = 0; i < 16; ++i) {
    ss << setfill(2) << setw(2) << hex << (int)md[i];
}