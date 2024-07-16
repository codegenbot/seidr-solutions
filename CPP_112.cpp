#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

pair<string, string> reverse_delete(string s, string c) {
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string rev = result;
    reverse(rev.begin(), rev.end());
    return {result, result == rev ? "True" : "False"};
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}