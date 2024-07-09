```cpp
#include <cassert>
#include <string>
#include <cctype>

std::string flip_case(const std::string& str) {
    std::string result = "";
    for (auto c : str) {  
        if (isalpha(c)) {
            if (isupper(c))
                result += tolower((char)c);  
            else
                result += toupper((char)c);
        } else
            result += c;
    }
    return result;
}

assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");