vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        if (min == max) {
            result.push_back(min);
            lst.clear();
        } else {
            result.push_back(min);
            vector<int> temp;
            for (int i : lst) {
                if (i != min) temp.push_back(i);
            }
            lst = temp;
            temp.clear();
            temp.push_back(max);
            lst.insert(lst.begin(), temp.begin(), temp.end());
        }
    }

    return result;
}