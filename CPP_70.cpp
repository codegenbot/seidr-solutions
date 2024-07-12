#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> const &a, vector<int> const &b) {
    return a == b;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val < max_val) {
            result.push_back(min_val);
            auto it = remove(lst.begin(), lst.end(), min_val);
            lst.erase(it, lst.end());
        } else {
            result.push_back(max_val);
            auto it = remove(lst.begin(), lst.end(), max_val);
            lst.erase(it, lst.end());
        }
    }
    return result;
}