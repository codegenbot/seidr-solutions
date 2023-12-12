```
#include <string>
#include <cassert>
#include <vector>

std::string anti_shuffle(const std::string& s) {
    std::vector<char> result;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result.push_back(' ');
        } else {
            size_t j = i + 1;
            while (j < s.length() && s[j] != ' ') {
                if (s[j] > s[i]) {
                    result.insert(result.begin() + j, s[i]);
                }
                j++;
            }
        }
    }
    return std::string(result.begin(), result.end());
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}
```