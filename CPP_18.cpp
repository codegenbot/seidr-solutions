#include <string>
#include <iostream>
#include <cassert>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        ++count;
        pos += substring.size();
    }
    return count;
}

std::cout << how_many_times("hello world", "world") << std::endl;