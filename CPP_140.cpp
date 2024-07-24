#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string fix_spaces(const string& text) {
    int count = 0;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            count++;
            if (count > 2) {
                text[i] = '-';
            }
        } else {
            count = 0;
        }
    }
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
        }
    }
    return text;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}