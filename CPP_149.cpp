#include <algorithm>
bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (stoi(a[i]) + stoi(b[i]) != 10) {
            return false;
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
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    vector<string> final_result;
    for (int i = 0; i < result.size(); i++) {
        for (int j = i + 1; j <= i && j < result.size(); j++) {
            if (issame(vector<string>({result[i], result[j]}), lst)) {
                final_result.push_back(result[i] + " " + result[j]);
                result.erase(result.begin() + j);
                j--;
            }
        }
    }
    return final_result;
}