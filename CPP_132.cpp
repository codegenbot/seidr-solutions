#include <iostream>
#include <string>
using namespace std;

bool is_nested(string str) {
    int depth = 0;
    bool nested = false;
    for (char c : str) {
        if (c == '[') {
            depth++;
            if (depth > 1) nested = true;
        } else if (c == ']') {
            depth--;
        }
    }
    return nested;
}

int main() {
    cout << boolalpha; // Print bools as true/false instead of 1/0
    cout << (is_nested("[[]]") == true) << endl;
    cout << (is_nested("[]") == false) << endl;
    cout << (is_nested("[[[[[]]]]") == true) << endl;
    cout << (is_nested("[[") == true) << endl;
    cout << (is_nested("]") == false) << endl;
    cout << (is_nested("[][[[]]]") == true) << endl;
    return 0;
}