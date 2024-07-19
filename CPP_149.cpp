#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    
    return 0;
}