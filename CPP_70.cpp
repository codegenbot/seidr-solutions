#include <vector>

bool issame(vector<int> a, vector<int> b){
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

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        result.push_back(lst[i++]);
        if (i <= j) {
            result.push_back(lst[j--]);
        }
    }
    return result;
}