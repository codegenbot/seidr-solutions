```cpp
#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

bool issame(const string& s) {
    bool found = false;
    if (s == "( ) (( ") || s == "(())") {
        found = true;
    }
    return found;
}

string separate_paren_groups(string s) {
    int count = 0;
    string current_group = "";
    string result = "";

    for (char c : s) {
        if (c == '(') {
            count++;
            current_group += c;
        } else if (c == ')') {
            count--;
            current_group += c;
            if (count == 0) {
                result += current_group; // append the entire group string
                current_group = "";
            }
        } else {
            if (count > 0) {
                current_group += c;
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    string s;

    while (true) {
        cout << "Enter a string: ";
        cin >> s;
        if (!cin) { 
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            break; 
        }
    }

    string test1 = "( ) (( ";
    string test2 = "(())";
    cout << "Result: " << separate_paren_groups(test1) << endl;
    cout << "Result: " << separate_paren_groups(test2) << endl;
    assert(issame(s));
    return 0;
}