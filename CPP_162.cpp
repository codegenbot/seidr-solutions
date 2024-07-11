```cpp
#include <sstream>
std::stringstream ss;

void string_to_md5(char *input) {
    // existing code...
    ss << std::hex << std::setfill('0') << std::setw(2) << (int)md5[i];
}

int main() {
    char input[256];
    std::cout << "Enter a string: ";
    std::cin.getline(input, 256);
    string_to_md5(input);
    return 0;
}