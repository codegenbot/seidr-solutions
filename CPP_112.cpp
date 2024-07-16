#include <string>
#include <algorithm>
#include <vector>
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

bool issame(pair<string, string> a, pair<string, string> b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    assert (issame(reverse_delete("mamma", "mia") , make_pair("", "True")));
    return 0;
}