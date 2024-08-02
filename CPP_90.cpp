Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return NULL;

    vector<int>::iterator it = min_element(lst.begin(), lst.end());
    for (vector<int>::iterator i = it; i != lst.end(); ++i) {
        if (*i > *it)
            return *i;
    }
    return NULL;
}