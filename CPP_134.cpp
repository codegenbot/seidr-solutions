```cpp
#include <string>
#include <cctype>
#include <algorithm>

bool check_if_last_char_is_a_letter(std::string txt) {
    if(txt.empty()) return false;
    std::string lastChar = txt.substr(txt.length()-1, 1);
    return (isalpha(lastChar[0])) && (!any_of(istospace(), txt.begin(), txt.end()));
}