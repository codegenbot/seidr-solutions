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
    string s;
    while (getline(cin, s)) {
        lst.push_back(s);
    }
    std::cout << (match_parens(lst) ? "Yes" : "No") << std::endl;
    return 0;
}