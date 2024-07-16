#include <string>
#include <algorithm>
#include <utility>
#include <cassert>

using namespace std;

pair<string, string> reverse_delete(string s, string c);

bool issame(pair<string, string> a, pair<string, string> b);

bool issame(pair<string, string> a, pair<string, string> b){
    return a.first == b.first && a.second == b.second;
}

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
    assert(issame(reverse_delete("mamma", "mia"), make_pair("", "True")));
    return 0;
}