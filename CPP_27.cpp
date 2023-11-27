#include <string>
#include <cctype>

string flip_case(string str);

int main() {
    string input;
    getline(cin, input);
    string result = flip_case(input);
    cout << result << endl;
    return 0;
}

string flip_case(string str){
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            result += toupper(str[i]);
        } else if (isupper(str[i])) {
            result += tolower(str[i]);
        } else {
            result += str[i];
        }
    }
    return result;
}