#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> modified_lst = lst;
    modified_lst.erase(remove_if(modified_lst.begin(), modified_lst.end(), [](const string& s){return s.length() % 2 != 0;}), modified_lst.end());
    sort(modified_lst.begin(), modified_lst.end(), [](const string& a, const string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return modified_lst;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}