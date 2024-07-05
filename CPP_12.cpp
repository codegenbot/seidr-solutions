#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longest(const vector<string>& strings) {
    if (strings.empty()) return "None";
    string longest_str = strings[0];
    for (const auto& str : strings) {
        if (str.length() > longest_str.length()) {
            longest_str = str;
        }
    }
    return longest_str;
}

int main() {
    cout << longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) << endl;
    return 0;
}