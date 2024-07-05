#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int i = 0, j = lst.size() - 1;
    bool flag = true;
    while (i <= j) {
        if (flag) {
            result.push_back(lst[i++]);
        } else {
            result.push_back(lst[j--]);
        }
        flag = !flag;
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    cout << "All tests passed!" << endl;
    return 0;
}