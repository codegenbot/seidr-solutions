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
    while (getline(cin, string s)) {
        lst.push_back(s);
    }
    if(match_parens(lst))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}