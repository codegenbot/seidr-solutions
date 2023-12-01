#include <vector>

bool issame(vector<int> a, vector<int> b) {
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

vector<int> strange_sort_list(vector<int> lst);

int main() {
    vector<int> input = {4, 2, 1, 3};
    vector<int> expected_output = {1, 4, 2, 3};
    vector<int> output = strange_sort_list(input);
    assert(issame(output, expected_output));
    return 0;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    while (left <= right) {
        if (left == right) {
            result.push_back(lst[left]);
        } else {
            result.push_back(lst[left]);
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}