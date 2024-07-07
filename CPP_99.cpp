```cpp
int closest_integer(double num) {
    int rounded_num = static_cast<int>(std::round(num));
    std::string str = (num >= 0 ? "" : "-");
    str += std::to_string(rounded_num);
    return std::stoi(str);
}