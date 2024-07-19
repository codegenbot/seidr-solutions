```cpp
#include <string>
#include <algorithm>

std::string anti_shuffle(const std::string& input) {
    std::string result = "";
    for (char c : input) {
        if (c == ' ') {
            while (!result.empty() && result.back() == ' ')
                result.pop_back();
        } else
            result += c;
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}