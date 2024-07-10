#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    // Delete strings with odd lengths from the list
    lst.erase(std::remove_if(lst.begin(), lst.end(),
        [](const string& str) { return str.length() % 2 != 0; }),
        lst.end());
    
    // Sort the list based on the length of each word, and then alphabetically
    std::sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            } else {
                return a.size() < b.size();
            }
        });
    
    return lst;
}