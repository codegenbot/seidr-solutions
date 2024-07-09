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
            else close++;
        }
    }
    return open == close;
}

int main() {
    vector<string> lst;
    int n;
    cin >> n;
    string s;
    for(int i=0; i<n; ++i){
        getline(cin, s);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        lst.push_back(s);
    }
    cout << (match_parens(lst) ? "Yes" : "No") << endl;
    return 0;
}