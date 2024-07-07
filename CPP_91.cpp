#include <iostream>
#include <string>

size_t main(const std::string& input) {
    size_t count = 0;
    size_t pos = 0;
    while ((pos = input.find("I am bored", pos)) != std::string::npos) {
        count++;
        pos += 9; // The length of the substring "I am bored"
    }
    return count;
}