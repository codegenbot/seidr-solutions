vector<int> strange_sort_vector(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> sorted;
    int start = 0;
    int end = lst.size() - 1;
    while (start <= end) {
        sorted.push_back(lst[start]);
        if (start != end) {
            sorted.push_back(lst[end]);
        }
        start++;
        end--;
    }
    return sorted;
}