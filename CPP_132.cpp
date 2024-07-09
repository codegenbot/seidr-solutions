#include <string>

bool is_nested(std::string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') close++;
        if (open > 0 && close > open) return true;
    }
    return false;

int main() {
    assert(is_nested("]]]]]]]]") == false);
    return 0;
}