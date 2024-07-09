```cpp
#include <cassert>
#include <string>
#include <cctype>

std::string flip_case(const std::string& str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (isalpha(c)) {
            if (isupper(c))
                result += tolower(c);
            else
                result += toupper(c);
        } else
            result += c;
    }
    return result;
}

assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");