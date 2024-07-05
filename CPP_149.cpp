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
    int n;
    cin >> n;
    vector<string> inputList(n);
    for(int i = 0; i < n; ++i) {
        cin >> inputList[i];
    }
    vector<string> result = sorted_list_sum(inputList);
    for(const auto& str : result) {
        cout << str << endl;
    }
    return 0;
}