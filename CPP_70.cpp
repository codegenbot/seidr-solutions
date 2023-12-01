vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());

    int min_index = 0;
    int max_index = lst.size() - 1;

    while (min_index <= max_index) {
        result.push_back(lst[min_index]);
        if (min_index != max_index) {
            result.push_back(lst[max_index]);
        }
        min_index++;
        max_index--;
    }

    return result;
}