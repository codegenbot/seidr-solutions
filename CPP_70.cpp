#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> strange_sort_list(vector<int> lst);

int main() {
    assert (issame(strange_sort_list({111111}), {111111}));
    return 0;
}

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end(), [&](int a, int b) {
        return issame({a%10}, {b%10}) ? a < b : a%10 < b%10;
    });
    vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        if (left == right) {
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