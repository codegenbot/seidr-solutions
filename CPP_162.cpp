```cpp
#include <iostream>
#include <string>
#include <iomanip>

std::string string_to_md5(const std::string& input) {
    std::string output;
    for (int i = 0; i < 32; i++) {
        char c = ((input[i % input.size()] + i) * i) % 256;
        if(i < 2)
            output += std::to_string(c);
        else
            output += std::setfill('0') << std::setw(2) << std::hex << c;
    }
    return output;
}

int main() {
    std::cout << std::fixed << std::setprecision(0) << string_to_md5("password") << std::endl;
    return 0;
}