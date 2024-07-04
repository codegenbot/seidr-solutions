#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string longest(const vector<string>& strings) {
    if (strings.empty()) return "None";
    string longestStr = "";
    for (const string& str : strings) {
        if (str.length() > longestStr.length()) {
            longestStr = str;
        }
    }
    return longestStr;
}

int main() {
    // Example test case
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    cout << "Test passed!" << endl;
    return 0;
}