#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    int sum = 0;
    for (const string& s : sorted_lst) {
        sum += stoi(s);
    }
    return sum;
}

int main() {
    vector<string> lst = {"123", "55", "789", "4", "9999"};
    
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    
    int result = sorted_list_sum(lst);
    
    return 0;
}