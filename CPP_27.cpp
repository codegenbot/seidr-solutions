```cpp
#include <string>
#include <cctype>

std::string flip_case(const std::string& s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (std::isupper(s[i])) {
            result += std::tolower(s[i]);
        } else if (std::islower(s[i])) {
            result += std::toupper(s[i]);
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}