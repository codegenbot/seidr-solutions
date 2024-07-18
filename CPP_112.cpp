#include <algorithm>
#include <cassert>
#include <string>
#include <vector>

vector<string> solve(string s, string c) {
    for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }

    string result = s;
    string reversed = s;
    reverse(reversed.begin(), reversed.end());

    return {result, (result == reversed) ? "True" : "False"};
}