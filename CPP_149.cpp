#include <algorithm>
#include <string>
#include <vector>

std::vector<string> sorted_list_sum(std::vector<string> a, std::vector<string> b) {
    a.insert(a.end(), b.begin(), b.end());
    std::vector<string> lst = a;

    lst.erase(std::remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    std::sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}