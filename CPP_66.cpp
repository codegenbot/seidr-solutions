```cpp
for (char c : newInput) {
    if(std::isdigit(c)) {
        digitsOnly += std::to_string((int)(c - '0'));
    }
}