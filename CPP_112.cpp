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
    return {resultReverse}; // Return vector of strings
}

int main() {
    assert(reverse_delete("mamma", "mia") == vector<string>{""}); // Compare result properly
    return 0;
}