#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].length() % 2 == 0) {
            result.push_back(lst[i]);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        } else {
            return a.length() < b.length();
        }
    });
    return result;
}

int main() {
    assert (issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
}