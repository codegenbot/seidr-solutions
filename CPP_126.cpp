vector<int> sorted_list = lst;
    sort(sorted_list.begin(), sorted_list.end());
    for (int i = 0; i < sorted_list.size(); i++) {
        if (sorted_list[i] != lst[i] || (i < sorted_list.size() - 1 && sorted_list[i] == sorted_list[i + 1])) {
            return false;
        }
    }
    return true;
}