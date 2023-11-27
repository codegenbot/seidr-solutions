vector<int> sort_third(vector<int> l){
    vector<int> l_sorted = l;
    for (int i = 0; i < l.size(); i += 3) {
        int end_index = min(i + 3, static_cast<int>(l.size()));
        sort(l_sorted.begin() + i, l_sorted.begin() + end_index);
    }
    return l_sorted;
}