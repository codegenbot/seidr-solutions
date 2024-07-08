#include <algorithm>
using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    int min_val = *min_element(lst.begin(), lst.end());
    int max_val = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        auto it_min = std::find_if(lst.begin(), lst.end(),
            [min_val](int x) { return x == min_val; });
        result.push_back(*it_min);
        lst.erase(it_min);

        if (lst.empty()) break;

        auto it_max = std::find_if(lst.begin(), lst.end(),
            [max_val](int x) { return x == max_val; });
        result.push_back(*it_max);
        lst.erase(it_max);

        min_val = *min_element(lst.begin(), lst.end());
        max_val = *max_element(lst.begin(), lst.end());
    }

    return result;
}