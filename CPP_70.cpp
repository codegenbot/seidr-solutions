#include <algorithm>
using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    int min_val = *min_element(lst.begin(), lst.end());
    int max_val = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        auto it = lst.begin();
        advance(it, distance(it, find_if(lst.begin(), lst.end(), [min_val](int x) { return x == min_val; })));
        result.push_back(*it);
        lst.erase(it);

        if (!lst.empty()) {
            it = lst.begin();
            advance(it, distance(it, find_if(lst.begin(), lst.end(), [max_val](int x) { return x == max_val; })));
            result.push_back(*it);
            lst.erase(it);
            min_val = *min_element(lst.begin(), lst.end());
            max_val = *max_element(lst.begin(), lst.end());
        }
    }

    return result;
}