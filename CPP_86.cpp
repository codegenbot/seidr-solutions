#include <algorithm>
using namespace std;

string antiShuffle(string s) {
    string result = "";
    string word;
    for (char c : s) {
        if (c == ' ') {
            result += word + " ";
            word = "";
        } else {
            int nextCharIndex = 0;
            while (nextCharIndex < word.length()) {
                if (word[nextCharIndex] <= c) {
                    break;
                }
                nextCharIndex++;
            }
            word.insert(nextCharIndex, 1, c);
        }
    }
    result += word;
    return result;
}

int main() {
    assert(antiShuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}