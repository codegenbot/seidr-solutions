#include <string>
#include <cassert>

string fix_spaces(string text) {
    for(int i=0; i<text.length(); i++) {
        if(text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            while(i+1 < text.length() && text[i+1] == ' ') {
                text.replace(i, 2, "-");
            }
        }
    }
    return text;
}

int main() {
    assert(fix_spaces("Hello  there") == "Hello-_there");
    assert(fix_spaces("Fix___these__spaces") == "Fix---these--spaces");

    return 0;
}