#include <iostream>
#include <string>
using namespace std;

string fix_spaces(string text) {
    string result = "";
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result.pop_back();
                result.pop_back();
                result += '-';
            } else {
                result += '_';
            }
        } else {
            count = 0;
            result += c;
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}