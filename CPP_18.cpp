#include <iostream>
#include <string>

int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = str.find(substring);
    while (pos != std::string::npos) {
        count++;
        pos = str.find(substring, pos + 1);
    }
    return count;
}

int main() {
    std::cout << how_many_times("john doe", "john") << std::endl; // should output 1
    return 0;
}