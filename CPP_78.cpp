```cpp
#include <cassert>
#include <string>
#include <algorithm>

int hex_key(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](char c){return tolower(c);});
    int result = std::accumulate(s.begin(), s.end(), 0,
                                 [](int sum, char c){
                                     return (isalnum(c)) ? sum + 1 : sum;
                                 });
    return result;
}

int main() {
    assert(hex_key("") == 0);
    return 0;
}