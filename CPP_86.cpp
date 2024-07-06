#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    size_t pos = 0;
    while (pos < s.length()) {
        size_t nextSpace = s.find(' ', pos);
        if (nextSpace == string::npos) {
            nextSpace = s.length();
        }
        string word = s.substr(pos, nextSpace - pos);
        sort(word.begin(), word.end());
        result += word;
        if (nextSpace < s.length()) {
            result += " ";
        }
        pos = nextSpace + 1;
    }
    return result;
}

string main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return anti_shuffle("Hi. My name is Mister Robot. How are you?");
}