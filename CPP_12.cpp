#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longest(const vector<string>& strings) {
    if (strings.empty()) return "None";
    string longestStr = strings[0];
    for (const auto& str : strings) {
        if (str.length() > longestStr.length()) {
            longestStr = str;
        }
    }
    return longestStr;
}

int main() {
    vector<string> test = {"x", "yyy", "zzzz", "www", "kkkk", "abc"};
    cout << longest(test) << endl; // Expected output: zzzz
    return 0;
}