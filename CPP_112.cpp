#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(const string& s, const string& c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string result_reversed = result;
    reverse(result_reversed.begin(), result_reversed.end());
    return {result, result == result_reversed ? "True" : "False"};
}

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main() {
    assert (issame(reverse_delete("mamma", "mia") , {"", "True"}));
    return 0;
}