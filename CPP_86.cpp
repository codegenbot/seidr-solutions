#include <algorithm>
#include <string> 
using namespace std;

string anti_shuffle(string s);

int main() {
    assert (anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            for (char c : s.substr(i)) {
                result += to_string(c);
            }
            result += ' ';
        } else {
            char c = s[i];
            while (i < s.length() && s[i] <= c) i++;
            result += string(1, c);
        }
    }
    return result;
}