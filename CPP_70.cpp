#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

vector<int> strange_sort_list(vector<int> lst);

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        if (issame(left, right)) {
            result.push_back(lst[left]);
            break;
        }
        result.push_back(lst[left]);
        result.push_back(lst[right]);
        left++;
        right--;
    }
    return result;
}