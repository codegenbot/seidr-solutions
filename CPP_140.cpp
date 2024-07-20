#include <string>

string fix_spaces(string text) {
    string result = "";
    int consecutiveSpaces = 0;
    for (char c : text) {
        if (c == ' ') {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) {
                result.pop_back();
                result.pop_back();
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result += c;
            consecutiveSpaces = 0;
        }
    }
    return result;
} 

int main() {
    string text;
    getline(cin, text);
    cout << fix_spaces(text) << endl;
    return 0;
}