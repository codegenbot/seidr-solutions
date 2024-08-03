#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string resultReverse = result;
    reverse(resultReverse.begin(), resultReverse.end());
    return {result};
}

int main() {
    assert(reverse_delete("mamma", "mia") == vector<string>{""});
    return 0;
}