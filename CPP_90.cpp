int next_smallest(vector<int> lst) {
    sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (auto num : lst) {
        if (num > smallest) {
            return num;
        }
    }
    return -1;
}