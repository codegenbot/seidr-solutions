#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

vector<int> strange_sort_list(vector<int> lst) {
    sort(lst.begin(), lst.end());
    int n = lst.size();
    vector<int> result(n);
    int i = 0, j = n - 1;
    int index = 0;
    while (i <= j) {
        result[index++] = lst[i++];
        if (i <= j) {
            result[index++] = lst[j--];
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}