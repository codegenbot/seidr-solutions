#include <string>

using namespace std;

int is_bored(string S) {
    int boredoms = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == '.' || S[pos] == '?' || S[pos] == '!') {
            boredoms++;
        }
        pos++; // Find the next "I" from where we left off
    }
    return boredoms;
}