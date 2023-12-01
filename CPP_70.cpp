#include <vector>
#include <algorithm>

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    
    sort(lst.begin(), lst.end());
    
    int left = 0;
    int right = lst.size() - 1;
    
    while (left <= right) {
        result.push_back(lst[left]);
        left++;
        if (left <= right) {
            result.push_back(lst[right]);
            right--;
        }
    }
    
    return result;
}