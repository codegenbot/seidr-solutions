#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return (a == b);
}

int sorted_list_sum(const vector<string>& lst) {
    vector<string> mutableList = lst;
    mutableList.erase(remove_if(mutableList.begin(), mutableList.end(), [](const string& s){ return s.length() % 2 != 0; }), mutableList.end());
    sort(mutableList.begin(), mutableList.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return mutableList;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}