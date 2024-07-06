#include <algorithm>
using namespace std;

std::string anti_shuffle(std::string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word;
            while (i < s.size() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (char c : word) {
                if(c>='A' && c<='Z')
                    result += to_string(c-('A'-'a'));
                else
                    result += to_string(c);
            }
        }
    }
    return result;
}

int main() {
    std::string input = "Hi. My name is Mister Robot. How are you?";
    assert(anti_shuffle(input) == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}