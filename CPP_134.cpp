```cpp
#include <string>
#include <cctype>

int check_if_last_char_is_a_letter(const std::string& s) {
    int last_space_index = -1;
    for(int i=s.length()-2; i>=0; i--){
        if(s[i] == ' ')
            last_space_index = i+1;
    }
    return (last_space_index != s.length() && isalpha(s.back()));
}