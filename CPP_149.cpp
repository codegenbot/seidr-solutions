```cpp
#include <algorithm>
#include <vector>
#include <string>
#include <functional>

using namespace std;

bool issame(const string& a, const string& b) {
    if (a.length() % 2 == 0 && b.length() % 2 != 0 || a.length() % 2 != 0 && b.length() % 2 == 0)
        return true;
    else
        return false;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), issame);
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.size() < b.size()) return true;
             else if (a.size() > b.size()) return false;
             else return a < b;
         });
    
    return lst;
}