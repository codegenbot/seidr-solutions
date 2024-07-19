#include <iostream>
#include <string>

int how_many_times(std::string str1, std::string str2) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str1.find(str2, pos)) != std::string::npos) {
        ++count;
        pos += str2.size();
    }
    return count;
}

int main() {
    assert(how_many_times("john doe", "john") == 1);
    // Add more test cases here
    return 0;
}