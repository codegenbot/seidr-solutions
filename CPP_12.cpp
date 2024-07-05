#include <iostream>
#include <vector>
#include <string>

using namespace std;

string findLongestString(const vector<string>& strings) {
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
    cout << findLongestString({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) << endl;
    return 0;
}