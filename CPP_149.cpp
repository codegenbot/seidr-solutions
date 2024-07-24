#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int issame(vector<string> v1, vector<string> v2) {
    if (v1.size() != v2.size()) return 0;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return 0;
    }
    return 1;
}

int sorted_list_sum(vector<vector<string>> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size() - 1; i++) {
        if (!issame(lst[i], lst[i + 1])) {
            sum++;
        }
    }
    return sum;
}

int main() {
    vector<vector<string>> lst = {{{"aaaa", "bbbb"}, {"dd"}, {"cc"}}};
    assert(sorted_list_sum(lst) == 2);
    return 0;
}