#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

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
    vector<string> result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    vector<string> expected = {"cc", "dd", "aaaa", "bbbb"};
    assert(result == expected);

    // Get input from the user
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    vector<string> lst(n);
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> lst[i];
    }

    // Call the sorted_list_sum function with user input and print the result
    vector<string> sorted_lst = sorted_list_sum(lst);
    cout << "Sorted list of even length strings:" << endl;
    for (const string& str : sorted_lst) {
        cout << str << endl;
    }

    return 0;
}