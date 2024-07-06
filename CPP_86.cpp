#include <string>
#include <algorithm>

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word = "";
            bool first = true;
            for (int j = i; j < s.size() && s[j] != ' '; j++) {
                if (first) {
                    first = false;
                } else {
                    word += s[j];
                }
            }
            for (char c : word) {
                result += min_element(word.begin(), word.end()) -> second; // return the smallest character
            }
            i += word.size() - 1;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string output = anti_shuffle(input);
    cout << "Anti-shuffled string: " << output << endl;
    return 0;
}