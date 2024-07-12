#include <string>
using namespace std;

int is_bored(string S) {
    int boredoms = 0;
    string sentence;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (sentence.length() > 2 && sentence.substr(0, 2) == "I ") {
                boredoms++;
            }
            sentence = "";
        } else {
            sentence += c;
        }
    }
    return boredoms;
}