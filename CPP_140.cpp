#include <string>

using namespace std;

string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && result.back() == ' ') {
                if (result.length() >= 3) {
                    result.pop_back();
                    result.pop_back();
                    result.pop_back();
                    result += '-';
                } else {
                    result.pop_back();
                    result += '_';
                }
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}