#include <string>

using namespace std;

int is_bored(string S) {
    int boredomCount = 0;
    size_t pos = 0;
    while ((pos = S.find(". ", pos)) != string::npos || (pos = S.find("? ", pos)) != string::npos || (pos = S.find("! ", pos)) != string::npos) {
        if (S.substr(0, 2).compare("I ") == 0) {
            boredomCount++;
        }
        pos += 3;
    }
    return boredomCount;
}