#include <algorithm>
#include <cassert>
#include <string>
#include <vector>

vector<string> solve_problem(const string& s, const string& c) {
    for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }

    string result = s;
    string reversed = s;
    reverse(reversed.begin(), reversed.end());

    return {result, (result == reversed) ? "True" : "False"};
}