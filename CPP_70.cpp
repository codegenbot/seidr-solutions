#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    // implementation goes here
}

vector<int> strange_sort_vector(vector<int> lst) {
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

int main() {
    assert(issame(strange_sort_vector({111111}), {111111}));

    return 0;
}