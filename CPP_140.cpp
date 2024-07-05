#include <string>
using namespace std;

string fix_spaces(const string& text) {
    string result;
    int spaceCount = 0;
    for(char c : text) {
        if(c == ' ') {
            spaceCount++;
        } else {
            if(spaceCount == 1) {
                result += '_';
            } else if(spaceCount > 1) {
                result += '-';
            }
            result += c;
            spaceCount = 0;
        }
    }
    if(spaceCount == 1) {
        result += '_';
    } else if(spaceCount > 1) {
        result += '-';
    }
    return result;
}

// Example usage:
int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}