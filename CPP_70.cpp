```
vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    int min = *min_element(lst.begin(), lst.end());
    int max = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        if (result.size() % 2 == 0) {
            for (int i = 0; i < lst.size(); ) {
                if (*min_element(lst.begin() + i, lst.end()) == min) {
                    result.push_back(*min_element(lst.begin() + i, lst.end()));
                    lst.erase(std::remove(lst.begin() + i, lst.end(), *min_element(lst.begin() + i, lst.end())), lst.end());
                    break;
                }
                i++;
            }
        } else {
            for (int i = 0; i < lst.size(); ) {
                if (*max_element(lst.begin() + i, lst.end()) == max) {
                    result.push_back(*max_element(lst.begin() + i, lst.end()));
                    lst.erase(std::remove(lst.begin() + i, lst.end(), *max_element(lst.begin() + i, lst.end())), lst.end());
                    break;
                }
                i++;
            }
        }
    }

    return result;
}