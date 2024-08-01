#include <stdio.h>
#include <string>
using namespace std;

int is_bored(string S) {
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == ' ' || pos == 0) {
            string sentence = S.substr(0, pos + 4);
            if (sentence.find('.') != string::npos ||
                sentence.find('?') != string::npos ||
                sentence.find('!') != string::npos) {
                count++;
            }
            S.erase(0, pos + 4);
        } else {
            pos++;
        }
    }
    return count;
}