```cpp
#include <cstddef>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> tokens;
int anti_shuffle(std::string str, char sep) {
    size_t pos = 0;
    while ((pos = str.find(sep)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str = str.substr(pos + 1);
    }
    tokens.push_back(str);

    // Anti-shuffle logic here
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(tokens.begin(), tokens.end(), g);

    return 0;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?", '.') == 0);
    return 0;
}