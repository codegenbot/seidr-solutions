#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) {
        return s.length() % 2 != 0;
    }), lst.end());

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

    result = sorted_list_sum({"a", "bbb", "cccc", "ee", "fff", "ggg", "hh"});
    expected = {"hh", "cccc"};
    assert(result == expected);

    result = sorted_list_sum({"even", "odd", "eight", "six"});
    expected = {"six", "even", "eight"};
    assert(result == expected);

    cout << "All test cases passed!" << endl;
    return 0;
}