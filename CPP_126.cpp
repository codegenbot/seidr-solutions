Here's the completed code:

bool is_sorted(vector<int> lst) {
    if (lst.size() < 2) return true; // base case: a vector with less than two elements is considered sorted
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] <= lst[i - 1]) return false; // if the current element is not greater than the previous one, then the vector is not sorted
        if (count(lst.begin(), lst.end(), lst[i]) > 1) return false; // if the current element appears more than once in the vector, then it's not sorted
    }
    return true;
}