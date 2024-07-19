#include <string>
bool correct_bracketing(const std::string& s) {
    int stackSize = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '<') {
            stackSize++;
        } else if(s[i] == '>') {
            if(stackSize <= 0) return false;
            stackSize--;
        }
    }
    return stackSize == 0;
}