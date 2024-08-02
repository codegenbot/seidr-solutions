Here's the completed code:

bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1)
        return true;

    vector<int>::iterator it = lst.begin();
    for (; it + 1 != lst.end(); ++it) {
        if (*it > *(it + 1)) {
            return false;
        }
        else if (count(it + 1, lst.end(), *it) > 1) {
            return false;
        }
    }

    return true;
}