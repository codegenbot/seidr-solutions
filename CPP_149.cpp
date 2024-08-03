#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    sorted_lst.erase(remove_if(sorted_lst.begin(), sorted_lst.end(), [](const string& s) { return s.length() % 2 != 0; }), sorted_lst.end());
    sort(sorted_lst.begin(), sorted_lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return sorted_lst;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), sorted_list_sum({"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}