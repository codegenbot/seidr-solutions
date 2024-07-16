#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

pair<string, string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }

    string result_reverse = result;
    reverse(result_reverse.begin(), result_reverse.end());

    return {result, result == result_reverse ? "True" : "False"};
}

int main() {
    assert(reverse_delete("mamma", "mia") == make_pair("", "True"));
}