#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(const string& s, const string& c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string result_reverse = result;
    reverse(result_reverse.begin(), result_reverse.end());
    return {result, (result == result_reverse) ? "True" : "False"};
}