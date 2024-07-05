#include <iostream>
#include <vector>
#include <string>
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
    vector<string> strings;
    string input;
    while (cin >> input) {
        strings.push_back(input);
    }
    cout << longest(strings) << endl;
    return 0;
}