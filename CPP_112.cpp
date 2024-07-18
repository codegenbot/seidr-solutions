#include <algorithm>
#include <cassert>
#include <string>
#include <vector>

pair<string, string> solve(const string& s, const string& c) {
    string str = s;
    for (char ch : c) {
        str.erase(remove(str.begin(), str.end(), ch), str.end());
    }

    string result = str;
    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    return {result, (result == reversed) ? "True" : "False"};
}