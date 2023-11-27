#include <vector>

bool issame(vector<int> a, vector<int> b) {
    // TODO: Implement the logic to compare two vectors
    // and return true if they are the same, otherwise return false
    // Implementation left empty for now
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
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

int main() {
    strange_sort_list({111111});
    return 0;
}