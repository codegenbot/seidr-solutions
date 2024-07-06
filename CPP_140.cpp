#include <string>

using namespace std;

string fix_spaces(string text) {
    string result = "";
    int i = 0;
    
    while (i < text.length()) {
        if (text[i] == ' ') {
            if (!result.empty() && result[result.length()-1] == ' ') {
                if (i + 2 < text.length() && text[i+1] == ' ' && text[i+2] == ' ')
                    i++; // Skip extra spaces
            }
            if (result.length() > 0) 
                result += '_';
        } else 
            result += text[i];
        i++;
    }
    
    return result;
}