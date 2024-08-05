#include <iostream>
#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result;
    bool prev_space = false;
    for(char c : text){
        if(c == ' '){
            if(prev_space){
                result.pop_back();
                result.push_back('-');
            } else {
                result.push_back('_');
            }
            prev_space = true;
        } else {
            result.push_back(c);
            prev_space = false;
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");

    return 0;
}