#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

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

int main() {
    vector<int> input = {1, 3, 2, 6, 5, 4};
    vector<int> expected = {1, 6, 2, 5, 3, 4};
    vector<int> result = strange_sort_list(input);

    assert(issame(result, expected));

    return 0;
}