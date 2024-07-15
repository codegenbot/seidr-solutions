#include <string>
using namespace std;

string kebabToCamel(string s) {
    string result = "";
    string word = "";

    for (char c : s) {
        if (c == '-') {
            result += toupper(word[0]);
            result += word.substr(1).substr(0, 1);
            result += word.substr(1).substr(1);
            word = "";
        } else if (c == ' ') {
            result += toupper(word[0]);
            result += word.substr(1);
            word = "";
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        result += toupper(word[0]);
        result += word.substr(1);
    } else {
        result = s;
    }

    return result;
}

int main() {
    string input;
    cin >> input;
    cout << kebabToCamel(input) << endl;
    return 0;
}