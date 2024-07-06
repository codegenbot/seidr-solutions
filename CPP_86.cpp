#include <algorithm>
#include <string>
using namespace std;

std::string anti_shuffle(std::string s) {
    std::string result = "";
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
                if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
                    result += to_string(c);
                else
                    result += " ";
        }
    }
    return result;
}

int main() {
    std::string input = "Hi. My name is Mister Robot. How are you?";
    assert(anti_shuffle(input) == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}