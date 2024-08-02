#include <iostream>
#include <algorithm>
#include <vector>

bool issame(const string& first, const string& second) {
    return first.length() == second.length();
}

vector<string> sorted_list_sum(vector<string>& lst);

vector<string> sorted_list_sum(vector<string>& lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){return s.length() % 2 != 0;}), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}