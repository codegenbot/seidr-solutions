#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
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

    vector<string> stringsOfEvenLength;

    // Split the strings into strings of even length
    for (auto &str: result) {
        if (str.length() % 2 == 0) {
            stringsOfEvenLength.push_back(str);
        }
    }

    std::sort(stringsOfEvenLength.begin(), stringsOfEvenLength.end());

    return stringsOfEvenLength;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}