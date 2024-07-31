```cpp
#include <cassert>
#include <string>
#include <algorithm>

int hex_key(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    int result = std::accumulate(s.begin(), s.end(), 0, [&s](char c){return (isalnum(c) ? 1 : 0);});
    return result;
}

int main() {
    assert(hex_key("") == 0);
    return 0;
}