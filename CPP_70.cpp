Here is the modified code:

#include <algorithm>
#include <vector>

// Sort a list of integers in a strange way: alternate between adding the smallest and largest elements.

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}