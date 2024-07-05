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
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();  // To ignore the newline character after integer input
    for (int i = 0; i < n; ++i) {
        string temp;
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, temp);
        input.push_back(temp);
    }
    cout << "Longest string: " << longest(input) << endl;
    return 0;
}