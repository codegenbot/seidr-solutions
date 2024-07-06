```c++
#include <algorithm>
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
                if (isupper(c)) {
                    char newC = tolower(c);
                    result += newC;
                } else {
                    result += c;
                }
            }
        }
    }
    return result;
}

int main() {
    std::string input = "Hi. My name is Mister Robot. How are you?";
    assert(anti_shuffle(input) == ".hi my name is mister robot. how are you?");
    return 0;
}