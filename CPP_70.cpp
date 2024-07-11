#include <vector>

bool issame(vector<int> a, vector<int> b); // Function prototype

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left]);
        if (left != right) {
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}

int main() {
    // Call strange_sort_list function in main
    assert(issame(strange_sort_list({111111}), {111111}));
}