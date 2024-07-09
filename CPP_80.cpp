#include <cstring>
#include <cassert>

bool is_happy(char* s) {
    if (strlen(s) < 3)
        return false;
    for (int i = 0; i < strlen(s) - 2; i++) {
        char c = s[i];
        bool found = true;
        for (int j = 1; j <= 2; j++) {
            if (s[i + j] != c)
                found = false;
                break;
        }
        if (!found)
            return false;
    }
    return true;
}

int main_check() { 
    assert(is_happy("iopaxioi") == false);
    return 0;
}