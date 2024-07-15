Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    vector<int> vec(lst);
    sort(vec.begin(), vec.end());
    int res = vec[1];
    return res;
}