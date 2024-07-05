#include <string>
#include <vector>
#include <iostream>

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
    vector<string> input;
    string line;
    while (getline(cin, line)) {
        input.push_back(line);
    }
    cout << longest(input) << endl;
    return 0;
}