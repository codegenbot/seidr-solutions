#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) {
        return s.length() % 2 != 0;
    }), lst.end());

    // Sort the remaining strings by length and then alphabetically
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });

    return lst;
}

int main() {
    vector<string> input;
    string str;
    while (cin >> str) {
        input.push_back(str);
    }
    vector<string> result = sorted_list_sum(input);
    for (const auto& s : result) {
        cout << s << " ";
    }
    return 0;
}