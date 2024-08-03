#include<string>
using namespace std;

string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (result.length() > 0 && result[result.length()-1] == ' ') {
                if (i + 1 < text.length() && text[i+1] == ' ')
                    result += '-';
                else
                    result += '_';
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}