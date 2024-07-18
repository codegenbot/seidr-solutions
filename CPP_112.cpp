#include <algorithm>
#include <cassert>
#include <string>
#include <vector>

vector<string> solve(const string& s, const string& c) {
    string temp = s;

    for (char ch : c) {
        temp.erase(remove(temp.begin(), temp.end(), ch), temp.end());
    }

    string result = temp;
    string reversed = temp;
    reverse(reversed.begin(), reversed.end());

    return {result, (result == reversed) ? "True" : "False"};
}