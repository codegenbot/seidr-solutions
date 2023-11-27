#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string fix_spaces(string text){
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ' && text[i+1] == ' ' && text[i+2] == ' ') {
            text.replace(i, 3, "-");
            i--;
        } else if (text[i] == ' ') {
            text.replace(i, 1, "_");
        }
    }
    return text;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");

    return 0;
}