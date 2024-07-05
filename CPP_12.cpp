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
    string temp;
    while(cin >> temp) {
        input.push_back(temp);
    }
    cout << longest(input) << endl;
    return 0;
}