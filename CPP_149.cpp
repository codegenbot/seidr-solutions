#include <algorithm>

vector<string> vector_sort(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
        [](const string& a, const string& b) {
            return (a.length() % 2 && !b.empty()) || (!a.empty() && b.length() % 2);
    });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length())
                return a < b;
            else
                return a.length() < b.length();
    });
    return lst;
}