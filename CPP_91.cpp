#include <string>
using namespace std;

int is_bored(string S) {
    int boredomCount = 0;
    string sentence;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (sentence.substr(0, 2) == "I ") {
                boredomCount++;
            }
            sentence.clear();
        } else {
            sentence += c;
        }
    }
    return boredomCount;
}