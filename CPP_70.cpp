#include <algorithm>

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());

        if (*min_element(lst.begin(), lst.end()) == *max_element(lst.begin(), lst.end())) {
            for (int i : lst) result.push_back(i);
            return result;
        }

        result.push_back(min_val);
        result.push_back(max_val);

        lst.erase(std::remove_if(lst.begin(), lst.end(), [&](int x) { return x == min_val || x == max_val; }), lst.end());
    }

    return result;
}