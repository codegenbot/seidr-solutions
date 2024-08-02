#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert> // Include <cassert> for the assert macro

using namespace std;

bool areEqual(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst);

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

// Change assert to static_assert
static_assert(areEqual(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));