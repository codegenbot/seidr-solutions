vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    int min_val = *min_element(lst.begin(), lst.end());
    int max_val = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        for (int i : lst) {
            if (i == min_val) {
                result.push_back(i);
                lst.erase(remove(lst.begin(), lst.end(), i), lst.end());
                break;
            }
        }

        if (!lst.empty()) {
            for (int i : lst) {
                if (i == max_val) {
                    result.push_back(i);
                    lst.erase(remove(lst.begin(), lst.end(), i), lst.end());
                    break;
                }
            }
        }
    }

    return result;
}