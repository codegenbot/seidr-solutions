#include <algorithm>
#include <string>
#include <vector>

using namespace std;

pair<string, string> reverse_delete(const string& s, const string& c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string reversed_result = result;
    reverse(reversed_result.begin(), reversed_result.end());
    return {result, result == reversed_result ? "True" : "False"};
}