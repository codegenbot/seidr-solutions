#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    int minVal = *min_element(lst.begin(), lst.end());
    int maxVal = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        auto it = find_if(lst.begin(), lst.end(), [minVal, maxVal](int x) {
            return x == minVal || x == maxVal;
        });
        result.push_back(*it);
        if (it != lst.end()) {
            it = next(it);
            if (*it == minVal) {
                minVal = *min_element(lst.begin(), it);
            } else if (*it == maxVal) {
                maxVal = *max_element(lst.begin(), it);
            }
            lst.erase(it);
        } else {
            break;
        }
    }

    return result;
}