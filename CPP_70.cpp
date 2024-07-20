#include <algorithm>
using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    for (int i = 0; i < lst.size(); i++) {
        if ((i % 2 == 0) || (i == lst.size() - 1)) {
            auto it = min_element(lst.begin(), lst.end());
            result.push_back(*it);
            lst.erase(it);
        } else {
            auto it = max_element(lst.begin(), lst.end());
            result.push_back(*it);
            lst.erase(it);
        }
    }

    return result;
}