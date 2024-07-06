#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b);
vector<string> sorted_list_sum(vector<string> lst);

// ... existing code ...

bool issame(vector<string> a, vector<string> b) {
    // your logic here...
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return result;
}