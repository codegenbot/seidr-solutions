```cpp
#include <string>
#include <iostream>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != std::string::npos) {
        count++;
        pos += substring.length();
    }
    return count;
}

int main() {
    std::string s, sub;
    std::cin >> s >> sub;
    std::cout << how_many_times(s, sub);
    return 0;
}