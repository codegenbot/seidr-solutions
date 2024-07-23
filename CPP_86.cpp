#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += s[i];
        } else {
            string word;
            for (int j = i; j < s.length() && s[j] != ' '; j++) {
                word += s[j];
            }
            string newWord;
            for (char c : word) {
                newWord += (c < newWord.empty() ? c : newWord[0]);
            }
            result += newWord;
            i = j - 1;
        }
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}