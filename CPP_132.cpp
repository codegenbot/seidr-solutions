#include <string>
using namespace std;

bool is_nested(string str) {
    int depth = 0;
    for (char c : str) {
        if (c == '[')
            depth++;
        else if (c == ']') {
            if (depth > 1)
                return true;
            depth--;
        }
    }
    return false;
}