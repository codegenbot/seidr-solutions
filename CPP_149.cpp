#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

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

vector<string> sorted_list_sum(vector<string> lst);

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].length() % 2 == 0) {
            result.push_back(lst[i]);
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

    vector<string> input = { "aaaa", "bbbb", "dd", "cc" };
    vector<string> expected = { "cc", "dd", "aaaa", "bbbb" };
    vector<string> result = sorted_list_sum(input);

    assert(issame(result, expected));

    return 0;
}