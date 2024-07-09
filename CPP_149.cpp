```
#include <algorithm>
#include <vector>
using namespace std;

bool issame(const string& a, const string& b) {
    if (a.length() != b.length()) {
        return false;
    } else {
        return a == b;
    }
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
                      [](const string& a, const string& b) { return !issame(a, b); });
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    
    return lst;
}