#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths
    vector<string> filteredList;
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            filteredList.push_back(str);
        }
    }

    // Sort the list by length and then alphabetically
    sort(filteredList.begin(), filteredList.end(),
         [](const string& a, const string& b) {
             if (a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.length() < b.length();
             }
         });

    return filteredList;
}