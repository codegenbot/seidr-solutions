#include <iostream>
#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != std::string::npos) {
        count++;
        str.erase(pos, substring.length());
    }
    return count;
}

int main() {
    assert(how_many_times("john doe", "john") == 1);
    // Your test cases
    return 0;
}