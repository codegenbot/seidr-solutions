#include <vector>
#include <string>
#include <algorithm>

vector<string> reverse_delete(string s, string c);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a == b);
}

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string reverse_result = result;
    reverse(reverse_result.begin(), reverse_result.end());
    return {result, result == reverse_result ? "True" : "False"};
}

assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));