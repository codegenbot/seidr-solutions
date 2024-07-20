Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // returning None is same as returning a sentinel value
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    int second_smallest = -1;
    for (int i = 0; i < sorted_lst.size() && second_smallest == -1; ++i) {
        if (sorted_lst[i] != lst[0]) {
            second_smallest = sorted_lst[i];
            break;
        }
    }
    return second_smallest;
}