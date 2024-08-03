#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
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

    cout << "Enter strings (enter 'done' to finish input):\n";
    while (cin >> str && str != "done") {
        input.push_back(str);
    }

    vector<string> expected_output = {"cc", "dd", "aaaa", "bbbb"};

    assert(sorted_list_sum(input) == expected_output);

    cout << "Input sorted successfully!\n";

    return 0;
}