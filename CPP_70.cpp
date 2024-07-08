```c
#include <vector>
#include <algorithm>
#include <initializer_list>
#include <iostream>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> strange_sort_list(initializer_list<int> lst) {
    vector<int> result;
    if (lst.size() == 0) return result;

    std::sort(lst.begin(), lst.end());

    for (int i : lst) {
        result.push_back(i);
    }

    return result;
}

int main1() {
    vector<int> result = strange_sort_list({111111});
    if (issame(result, {11111})) {
        cout << "Output is correct.\n";
    } else {
        cout << "Output is incorrect.\n";
    }
    return 0;
}