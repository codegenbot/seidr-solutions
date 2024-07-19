#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<vector<string>> result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    assert (issame(result , {"cc", "dd", "aaaa", "bbbb"}));
}