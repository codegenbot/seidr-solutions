```cpp
#include <algorithm>
#include <cctype>
#include <string>

std::string filp_case(const std::string& str) {
    std::string s = str;
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } else if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

int main() {
    std::string input = "These violent delights have violent ends";
    assert(filp_case(input) == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}