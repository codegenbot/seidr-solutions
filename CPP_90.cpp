Here is the solution:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None in Python
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    for (int i = 0; i < sorted_lst.size(); i++) {
        if (i > 0 && sorted_lst[i] != sorted_lst[i-1]) {
            return *std::next(lst.begin(), std::distance(sorted_lst.begin() + i - 1, std::find(sorted_lst.begin(), sorted_lst.end(), sorted_lst[i])) - 1);
        }
    }
    return -1; // Return None in Python
}