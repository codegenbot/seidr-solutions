#include <string>

int is_bored(string S) {
    int count = 0;
    int pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == 'I' && (S[pos + 1] == '.' || S[pos + 1] == '?' || S[pos + 1] == '!')) {
            count++;
        }
        pos = S.find("I", pos);
    }
    return count;
}