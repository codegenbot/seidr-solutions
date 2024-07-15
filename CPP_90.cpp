```c++
int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; // return None
    sort(lst.begin(), lst.end());
    vector<int>::iterator it = upper_bound(lst.begin(), lst.end(), lst[1]);
    if (it == lst.end())
        return -1;
    else
        return *it;
}