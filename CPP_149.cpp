#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    // Filter out strings with odd lengths and sort them by length and then alphabetically
    vector<string> result;
    for (const string& s : lst) {
        if (s.length() % 2 == 0) {
            result.push_back(s);
        }
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.size() != b.size()) {
                 return a.size() < b.size();
             } else {
                 return a < b;
             }
         });
    return result;
}