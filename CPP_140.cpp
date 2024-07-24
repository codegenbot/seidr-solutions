#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string fix_spaces(const string& text) {
    int count = 0;
    string modified_text = text;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            count++;
            if (count > 2) {
                modified_text[i] = '-';
            }
        } else {
            count = 0;
        }
    }
    for (int i = 0; i < text.size(); ++i) {
        if (modified_text[i] == ' ') {
            modified_text[i] = '_';
        }
    }
    return modified_text;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}