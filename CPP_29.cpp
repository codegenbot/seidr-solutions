#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filteredStrings;
    for (string s : strings) {
        if (s.find(prefix) == 0) {
            filteredStrings.push_back(s);
        }
    }
    return filteredStrings;
}

int main() {
    vector<string> inputStrings = {"abc", "bcd", "cde", "vector"};
    string prefix = "a";

    vector<string> result = filter_by_prefix(inputStrings, prefix);

    for (string s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}