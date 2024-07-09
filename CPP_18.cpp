```cpp
#include <cassert>
#include <string>

int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find(substring)) != std::string::npos) {
        count++;
        str = str.substr(pos + substring.length());
    }
    return count;
}

int main() {
    assert(how_many_times(std::string("john doe"), std::string("john")) == 1);
    return 0;