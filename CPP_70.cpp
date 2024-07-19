Here is the solution:

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    std::sort(lst.begin(), lst.end());
    int min = *min_element(lst.begin(), lst.end());
    int max = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        if (result.back() == min) {
            min = *min_element(++(lst.begin()));
        } else if (result.back() == max) {
            max = *max_element(--(lst.end()));
        }
        result.push_back(min);
        lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());
    }

    return result;
}