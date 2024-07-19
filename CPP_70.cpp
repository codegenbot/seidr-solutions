#include <vector>

vector<int> strange_sort_list(vector<int> lst) {
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
    // Sample usage of the modified function
    vector<int> input = {5, 2, 8, 1, 9};
    vector<int> output = strange_sort_list(input);
    for (int num : output) {
        cout << num << " ";
    }
    return 0;
}