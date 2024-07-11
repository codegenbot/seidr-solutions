```cpp
std::stringstream ss;
ss << std::hex << std::setfill('0') << std::setw(2) << (int)string_to_md5(input);