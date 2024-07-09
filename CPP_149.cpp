#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove words with odd lengths from the vector
    lst.erase(remove_if(lst.begin(), lst.end(),
        [](const string& s) { return s.size() % 2 != 0; }), lst.end());
    
    // Sort the remaining strings by length and then alphabetically
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            } else {
                return a.length() < b.length();
            }
        });
    
    return lst;
}