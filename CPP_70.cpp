#include <vector>

vector<int> strange_sort_list(vector<int>& lst) {
    sort(lst.begin(), lst.end());
    vector<int> result;
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        result.push_back(lst[i++]);
        if (i <= j) {
            result.push_back(lst[j--]);
        }
    }
    return result;
}

vector<int> issame(vector<int> a, vector<int> b) {
    return strange_sort_list(a) == strange_sort_list(b);
}

assert(issame(strange_sort_list({111111}), {111111}));