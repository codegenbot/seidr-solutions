#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if (static_cast<int>(c) % 2 != 0) {
                count++;
            }
        }
        string temp = "The number of odd elements ";
        temp += std::to_string(count);
        temp += " in the string ";
        temp += std::to_string(i+1);
        temp += " of the input.";
        result.push_back(temp);
    }
    return result;
}