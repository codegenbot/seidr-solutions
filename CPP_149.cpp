#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a,vector<string> b){
    return a==b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths
    vector<string> result;
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    // Sort the resulting vector by length and then alphabetically
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        } else {
            return a < b;
        }
    });

    return result;
}