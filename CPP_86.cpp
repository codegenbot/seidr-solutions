```cpp
#include <iostream>
#include <algorithm>

std::string anti_shuffle(std::string str) {
    std::vector<char> vec(str.begin(), str.end());
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(vec.begin(), vec.end(), g);
    return std::string(vec.begin(), vec.end());
}

int main() {
    std::cout << anti_shuffle("Hi. My name is Mister Robot. How are you?") << std::endl;
    return 0;
}