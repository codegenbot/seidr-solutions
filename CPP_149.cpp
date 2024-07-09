#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    lst.erase(std::remove_if(lst.begin(), lst.end(),
        [](const string& s){ return s.length() % 2; }), lst.end());
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b){
            if(a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });
    return lst;
}