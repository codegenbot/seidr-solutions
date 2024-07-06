#include <algorithm>
#include <vector>
using namespace std;

bool issame(const string& a, const string& b) {
    int sum_a = 0;
    for (char c : a) {
        if (c >= 'a' && c <= 'z')
            sum_a += tolower(c) - 'a' + 1;
        else
            sum_a += toupper(c) - 'A' + 1;
    }
    
    int sum_b = 0;
    for (char c : b) {
        if (c >= 'a' && c <= 'z')
            sum_b += tolower(c) - 'a' + 1;
        else
            sum_b += toupper(c) - 'A' + 1;
    }
    
    return sum_a == sum_b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
                     [](const string& a, const string& b) { return !issame(a, b); });
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length())
                 return a.length() < b.length();
             else
                 return a < b;
         });
    
    return lst;
}