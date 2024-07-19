#include <vector>

vector<int> strange_sort_list(vector<int> a){
    sort(a.begin(), a.end());
    vector<int> result;
    int left = 0, right = a.size() - 1;
    while (left <= right) {
        result.push_back(a[left]);
        if (left != right) {
            result.push_back(a[right]);
        }
        left++;
        right--;
    }
    return result;
}