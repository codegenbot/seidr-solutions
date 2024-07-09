#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> vector_sort(vector<string> lst) {
    auto it = remove_if(lst.begin(), lst.end(),
                         [&](const string& s) { return s.length() % 2 != 0; });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length())
            return a < b;
        else
            return a.length() < b.length();
    });
    return lst;
}