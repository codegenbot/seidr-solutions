#include <iostream>
#include <string>
#include <cassert>

int how_many_times(std::string str, std::string substring) {
    if (substring.empty()) {
        return 0;
    }
    
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        ++count;
        ++pos;
    }
    
    return count;
}

int main() {
    assert(how_many_times("john doe", "john") == 1);
}