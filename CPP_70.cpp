#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end(), issame);
    vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left++]);
        if (left <= right) {
            result.push_back(lst[right--]);
        }
    }
    return result;
}