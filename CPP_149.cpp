#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string &s) {
        return s.length() % 2 != 0;
    }), lst.end());

    // Sort the vector by length, and then alphabetically
    sort(lst.begin(), lst.end(), [](const string &a, const string &b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });

    return lst;
}

int main() {
    assert(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) == vector<string>({"cc", "dd", "aaaa", "bbbb"}));
    cout << "All tests passed!" << endl;
    return 0;
}