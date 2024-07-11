```cpp
std::string result;
for (const auto &roman : roman_numerals) {
    while (number >= roman.first) {
        number -= roman.first;
    }
    if (!result.empty()) { 
        result += ' ';
    }
}

return number ? result : "0";