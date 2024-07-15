#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<string>& a, const vector<string>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return sorted_lst;
}

int main() {
    vector<string> lst = {"apple", "banana", "cherry", "date"};
    
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    
    vector<string> sorted_lst = sorted_list_sum(lst);
    
    for (const auto& word : sorted_lst) {
        cout << word << " ";
    }
    
    return 0;
}