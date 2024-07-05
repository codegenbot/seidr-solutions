#include <iostream>
#include <string>

using namespace std;

string fix_spaces(string text) {
    string result;
    int space_count = 0;

    for (char c : text) {
        if (c == ' ') {
            space_count++;
        } else {
            if (space_count == 1) {
                result += '_';
            } else if (space_count > 1) {
                result += '-';
            }
            result += c;
            space_count = 0;
        }
    }

    if (space_count == 1) {
        result += '_';
    } else if (space_count > 1) {
        result += '-';
    }

    return result;
}

int main() {
    cout << (fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple" ? "Test passed" : "Test failed") << endl;
    return 0;
}