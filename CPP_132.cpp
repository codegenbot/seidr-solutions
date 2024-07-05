#include <iostream>
#include <string>
using namespace std;

bool is_nested(const string& str) {
    int depth = 0;
    for (char ch : str) {
        if (ch == '[') {
            depth++;
        } else if (ch == ']') {
            depth--;
        }
        if (depth > 1) {
            return true;
        }
    }
    return depth != 0; // Check if the brackets are not properly closed
}