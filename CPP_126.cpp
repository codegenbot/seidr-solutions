Here is the completed code:

bool is_sorted(vector<int> lst){
    if (lst.size() <= 1) return true; // edge case: single element or empty vector
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i-1]) continue;
        if (count(lst.begin(), lst.end(), lst[i]) > 1) return false; // found duplicate, so not sorted
        return false;
    }
    return true;
}