#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

bool issame(const string& a, const string& b) {
    return a.length() == b.length();
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    
    sorted_lst.erase(remove_if(sorted_lst.begin(), sorted_lst.end(), [](const string& s) { return s.length() % 2 != 0; }), sorted_lst.end());
    
    sort(sorted_lst.begin(), sorted_lst.end(), [](const string& a, const string& b) {
        if (!issame(a, b)) {
            return a.length() < b.length();
        } else {
            return a < b;
        }
    });
    
    return sorted_lst;
}