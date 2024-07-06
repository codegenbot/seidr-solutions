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
        result += tolower(word[0]);
        for (size_t i = 1; i < word.length(); i++) {
            result += toupper(word[i]);
        }
        pos = nextSpace + 1;
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".hi my name is mister robot. how are you?");
    return 0;
}