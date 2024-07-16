#include <string>
#include <algorithm>
#include <cassert>
#include <utility>

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

int solve_problem() {
    assert(reverse_delete("mamma", "mia") == make_pair("", "True"));
    return 0;
}

int main() {
    return solve_problem();
}