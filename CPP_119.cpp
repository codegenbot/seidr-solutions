```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return open == close;
}

int main() {
    vector<string> lst;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        if(getline(cin, s)) { 
            cin.ignore(); // Add this to consume whitespace
            cin.ignore(); // Add this to consume newline left over from getline
            lst.push_back(s);
        } else {
            while (cin.peek() == '\n') cin.ignore();
            break; 
        }
    }
    if(match_parens(lst))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}