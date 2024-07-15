#include <vector>
#include <algorithm>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst){
    lst.erase(std::remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    std::sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}