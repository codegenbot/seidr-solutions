#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void fix_spaces(string &text) {
    int consecutive_spaces = 0;
    string result = "";
    for (char c : text) {
        if (c == ' ') {
            consecutive_spaces++;
            if (consecutive_spaces > 2) {
                result.pop_back();
                result.pop_back();
                result += '-';
            } else {
                result += '_';
            }
        } else {
            consecutive_spaces = 0;
            result += c;
        }
    }
    cout << result << endl;
}

int main() {
    fix_spaces("   Exa 1 2 2 mple");
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}