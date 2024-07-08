```cpp
#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::cout << string_sequence(10) << std::endl;
}

std::string string_sequence(int n) {
    ostringstream oss;
    for (int i = 0; i <= n; ++i) {
        oss << i << " ";
    }
    return oss.str();
}