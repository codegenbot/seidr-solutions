#include <string>

int is_bored(string S) {
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S.substr(pos).find_first_of(".!?") == string::npos)
            count++;
        pos += 1;
    }
    return count;