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
                result += to_string(c);
            }
            if (word[0] >= 'a' && word[0] <= 'z') {
                char first = topper(word[0]);
                result += first;
                for (char c : word.substr(1)) {
                    result += tolower(c);
                }
            } else {
                for (char c : word) {
                    result += tolower(c);
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