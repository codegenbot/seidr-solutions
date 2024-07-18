#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(pair<string, string> a, pair<string, string> b) {
    return a == b;
}

pair<string, string> reverse_delete(string s, string c) {
    string result;
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch; 
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    return {result, (result == reversed) ? "True" : "False"};
}

int main(){
    assert(issame(reverse_delete("mamma", "mia"), make_pair("", "True")));
    return 0;
}