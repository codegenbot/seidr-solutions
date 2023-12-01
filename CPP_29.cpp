#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filteredStrings;
    for (const string& str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

int main() {
    vector<string> strings = {"abc", "bcd", "cde", "vector"};
    string prefix = "a";

    vector<string> filteredStrings = filter_by_prefix(strings, prefix);

    cout << "{";
    for (int i = 0; i < filteredStrings.size(); i++) {
        cout << "\"" << filteredStrings[i] << "\"";
        if (i != filteredStrings.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}