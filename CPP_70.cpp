#include <algorithm>
#include <vector>

// Sort the list such that all even numbers come first and then all odd numbers in ascending order.

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        if (min_val % 2 == 0) {
            result.push_back(min_val);
            lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        } else {
            bool found = false;
            for (int i : lst) {
                if (i > min_val && i % 2 != 0) {
                    int max_val = i;
                    result.push_back(max_val);
                    lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
                    found = true;
                    break;
                }
            }
            if (!found) {
                for (int i : lst) {
                    if (i > min_val && i % 2 == 0) {
                        int max_val = i;
                        result.push_back(max_val);
                        lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
                        break;
                    }
                }
            }
        }
    }
    return result;
}