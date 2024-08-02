#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string fix_spaces(string text) {
    for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            if (i > 0 && text[i - 1] == ' ') {
                text.replace(i - 1, 2, "-");
                i--;
            } else {
                text[i] = '_';
            }
        }
    }
    return text;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    
    return 0;
}