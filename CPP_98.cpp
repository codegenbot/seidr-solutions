#include <string>

int count_upper(std::string s) {
    int count = 0;
    for(int i = 1; i < s.length(); i += 2) {
        if(isupper(s[i])) {
            count++;
        }
    }
    return count;
}