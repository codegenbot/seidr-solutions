#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string &s) {
        return s.size() % 2 != 0;
    }), lst.end());

    // Sort by length, then alphabetically
    sort(lst.begin(), lst.end(), [](const string &a, const string &b) {
        if (a.size() == b.size())
            return a < b;
        return a.size() < b.size();
    });

    return lst;
}

int main() {
    assert(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) == vector<string>{"cc", "dd", "aaaa", "bbbb"});
    assert((sorted_list_sum({"a", "bb", "ccc", "dddd", "eeeee"}) == vector<string>{"bb", "dddd"}));
    cout << "All tests passed!" << endl;
    return 0;
}