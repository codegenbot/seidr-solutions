#include <string>

int is_bored(const std::string& S) {
    int count = 0, pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == 'I' && (S[pos + 1] == '.' || S[pos + 1] == '?' || S[pos + 1] == '!')) {
            count++;
        }
        pos = S.find("I", pos);
    }
    return count;
}