```cpp
#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

bool match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return open == close;
}

int main() {
    vector<string> lst;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        string s;
        getline(cin, s);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!s.empty()) {
            lst.push_back(s);
        }
    }
    bool result = match_parens(lst);
    cout << (result ? "Yes" : "No") << endl;
}