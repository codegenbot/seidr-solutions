#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <iostream>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
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

vector<string> sorted_list_sum(vector<string> list, vector<string> b) {
    sort(list.begin(), list.end());
    return list;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}, {}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}