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
    const std::string str = "john doe";
    assert(how_many_times(str, std::string("john")) == 1);
    return 0;
}