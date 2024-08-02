#include <algorithm>

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    int min = *min_element(lst.begin(), lst.end());
    int max = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        if (result.size() % 2 == 0) {
            for (int i = 0; i < 1 && !lst.empty(); ++i) {
                result.push_back(min);
                lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());
                --min;
            }
        } else {
            for (int i = 0; i < 1 && !lst.empty(); ++i) {
                if (*max_element(lst.begin(), lst.end()) == max)
                    lst.pop_back();
                result.push_back(*max_element(lst.begin(), lst.end()));
                lst.erase(std::remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
            }
        }
    }

    return result;
}