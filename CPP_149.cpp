#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        throw runtime_error("Size of vectors must be the same.");
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            throw runtime_error("Vectors are not the same.");
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), 
         [](const string& s1, const string& s2) {
             if (s1.length() != s2.length()) {
                 return s1.length() < s2.length();
             } else {
                 return s1 < s2;
             }
         });
    return result;
}