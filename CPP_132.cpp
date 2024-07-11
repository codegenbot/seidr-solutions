#include <string>
using namespace std;

bool is_nested(string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') close++;
    }
    return open > 0 && close > open;
}