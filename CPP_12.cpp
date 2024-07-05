#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

string longest(const vector<string>& strings) {
    if (strings.empty()) return "None";
    string longest_str = "";
    for (const string& s : strings) {
        if (s.length() > longest_str.length()) {
            longest_str = s;
        }
    }
    return longest_str;
}

int main() {
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    cout << "Test passed!" << endl;
    return 0;
}