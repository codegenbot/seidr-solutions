```
#include <string>
#include <cassert>

using namespace std;

int words_in_sentence(const string& sentence) {
    int count = 0;
    bool inWord = false;

    for (char c : sentence) { 
        if (c == ' ') {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
    }

    return count;
}

int main() {
    assert(words_in_sentence("here is") == 2);
}