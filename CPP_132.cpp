#include <iostream>
#include <string>

using namespace std;

bool is_nested(string str) {
    int n = str.size();
    int depth = 0;
    for (int i = 0; i < n; ++i) {
        if (str[i] == '[') {
            depth++;
        } else if (str[i] == ']') {
            depth--;
        }
        if (depth > 1) {
            return true;
        }
        if (depth < 0) {
            return false;
        }
    }
    return depth == 0;
}

int main() {
    cout << is_nested("[[][]]") << endl; // Example test case
    cout << is_nested("[[[[]]]]") << endl; // Example test case
    return 0;
}