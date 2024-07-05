#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longest(const vector<string>& strings) {
    if (strings.empty()) return "None";
    string longestStr = strings[0];
    for (const string& str : strings) {
        if (str.length() > longestStr.length()) {
            longestStr = str;
        }
    }
    return longestStr;
}

int main() {
    cout << longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) << endl;
    return 0;
}