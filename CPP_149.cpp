#include <iostream>
#include <algorithm>
#include <vector>

bool issame(const string& a, const string& b) {
    return a.length() == b.length() && a == b;
}

int sorted_list_sum(const vector<string>& lst) {
    int sum = 0;
    for (const string& s : lst) {
        sum += stoi(s);
    }
    return sum;
}

vector<string> main(vector<string>& lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        } else {
            return a < b;
        }
    });
    return lst;
}